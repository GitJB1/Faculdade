import Data.List (sortBy, groupBy)
import Data.Function (on)

-- Minhas funcoes
zip' :: [a] -> [b] -> [(a, b)]
zip' (x:xs) (y:ys) = (x,y) : zip' xs ys
zip' [] _ = []
zip' _ [] = []

map' :: (a -> b) -> [a] -> [b]
map' _ [] = []
map' f (x:xs) = f x : map' f xs

type Line = String
lines' :: String -> [Line]
lines' [] = [""]
lines' (x:xs) = if x == '\n' then "" : lines' xs else case lines' xs of (l:ls) -> (x:l) : ls

type Word' = String
type Doc = String


-- a & b) Separa o documento em linhas usando a funcao lines' e ao mesmo tempo enumera cada linha usando a funcao zip'
numLines :: Doc -> [(Int, Line)]
numLines linhas = zip' [1..] (lines' linhas)

-- c) Associar o numero da linha a cada palavra da linha
allNumWords :: [(Int, Line)] -> [(Int, Word')]
allNumWords [] = []
allNumWords ((n, l):xs) = map' (\w -> (n, w)) (words l) ++ allNumWords xs

-- d) Ordenar alfabeticamente as ocorrências de palavras no texto:
sortLs :: [(Int, String)] -> [(Int, String)]
sortLs = sortLs = sortBy (\(_, w1) (_, w2) -> compare w1 w2) 

-- e) Juntar as várias ocorrências de cada palavra, produzindo, para cada palavra, a lista dos números das linhas em que a palavra ocorre: 
almalgamate :: [(Int, Word')] -> [([Int], Word')]
almalgamate xs = map' (\ws -> (map' fst ws, snd (head ws))) (groupBy (\x y -> snd x == snd y) (sortLs xs))

-- f) Eliminar, da lista de números de linhas em que cada palavra ocorre, as repetições de um mesmo número de linha:

shorten :: [([Int],Word')] -> [([Int],Word')]
shorten = map' (\(ns, w) -> (unifica ns, w))

unifica [] = []
unifica (x:xs)
    | x `elem` xs = unifica xs
    | otherwise = x : unifica xs

-- pega a lista de linhas e aplica a funcao unifica

makeindex :: Doc -> [([Int], Word')]
makeindex txt = shorten . almalgamate . sortLs . allNumWords . numLines $ txt

formatIndex :: [([Int], Word')] -> String
formatIndex xs = unlines [w ++ " - " ++ show ns | (ns, w) <- xs]

main :: IO ()
main = do
    putStr "Arquivos: "
    arq <- getLine
    txt <- readFile arq
    putStr $ formatIndex (makeindex txt)

