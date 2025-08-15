minhaLista = [1, 2, 3, 4]

-- Exercicio 1
pertence _ [] = False
pertence x (head:tail)
    | x == head = True
    | otherwise = pertence x tail

-- Exercicio 2
intercessao [] _ = []
intercessao (head1:tail1) tail2
    | pertence head1 tail2 = head1 : intercessao tail1 tail2
    | otherwise = intercessao tail1 tail2

-- Exercicio 3
inverso [] = []
inverso (head:tail) = inverso tail ++ [head]

-- Exercicio 4
nPrimeiros _ [] = []
nPrimeiros 0 _ = []
nPrimeiros n (head:tail) = head:nPrimeiros (n-1) tail

nUltimos n (head:tail)= nPrimeiros n (inverso(head:tail))

-- Exercicio 5
soma2 :: [Integer] -> [Integer] -> [Integer]
soma2 _ [] = []
soma2 [] _ = []
soma2 (head1:tail1) (head2:tail2) = [head1 + head2] ++ soma2 tail1 tail2

-- Exercicio 6
pot2 :: Int -> [Int]
pot2 0 = []
pot2 n = pot2 (n-1) ++ [2^n]

-- Exercicio 7
intercalacao list1 [] = list1
intercalacao [] list2 = list2
intercalacao (head1:tail1) (head2:tail2)
    | head1 > head2 = head2 : intercalacao (head1:tail1) tail2
    | otherwise = head1 : intercalacao tail1 (head2:tail2)

-- Exercicio 8
menor [] = 0
menor [x] = x
menor (x:xs) = if x < menor xs then x else menor xs

-- Exercicio 9
removerElem _ [] = []
removerElem x (head:tail) = if x == head then tail else head : removerElem x tail

-- Exercicio 10
ordenar [] = []
ordenar list = menor list : ordenar (removerElem (menor list) list)

-- Exercicio 11
-- ...
