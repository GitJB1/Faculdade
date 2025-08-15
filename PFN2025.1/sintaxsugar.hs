-- Sintax Sugar -> quando a linguagem fornece formas mais fáceis/mais bonitas de escrever códigos

listaNum n = [x|x<-[0.. n]]

listaDuplas = [(1, 'a'), (2, 'b'), (3, 'c')]

pares [] = []
pares (x:xs)
    | rem x 2 == 0 = pares(xs)
    | otherwise = x : pares (xs)

remover a [] = []
remover a (x:xs) = if a == x then remover a xs else x : remover a xs

todos :: [Bool] -> Bool
todos [] = True
todos (x:xs) = x && todos xs

segundos [] = []
segundos ((a, b) : xs) = b : segundos xs

ultimo [x] = x
ultimo (x:xs) = ultimo xs