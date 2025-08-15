{-
Listas são estruturas de dados
Construtores de dados: 
"'cabeça' : 'cauda'" -> Constrói um elemento 'cabeça' e 'cauda', sendo a 'cauda' uma outra lista
"[]" -> Constrói uma lista vazia
-}

frutas :: [String]
frutas = ["Uva", "Maca", "Pera", "Caqui", "Melancia", "Banana"]

getLength [] = 0
getLength (x:xs) = 1 + getLength xs

somatorio :: [Double] -> Double
somatorio [] = 0
somatorio (head:tail) = head + somatorio tail

produtorio :: [Double] -> Double
produtorio [] = 1
produtorio (head:tail) = head * produtorio tail

maior [] = []
maior [x] = x
maior (x:xs)
    | x > maior xs = x
    | otherwise = maior xs

