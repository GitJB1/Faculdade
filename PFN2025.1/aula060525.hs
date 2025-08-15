lista1 = [1, 2, 3, 4]
lista2 = ['a', 'b', 'c', 'd', 'e']

zip' _ [] = []
zip' [] _ = []
zip' (x:xs) (y:ys) = (x, y) : zip' xs ys

primeiroFator = 1
tabuada = if primeiroFator < 9 then tabuadaPrimeiroFator primeiroFator ++ tabuadaPrimeiroFator (primeiroFator + 1) else tabuadaPrimeiroFator 10


tabuadaPrimeiroFator n = tabuadaSegundoFator n 1

tabuadaSegundoFator n multiplicador = if multiplicador < 10 then (n, multiplicador, n*multiplicador) : tabuadaSegundoFator n (multiplicador + 1) else [(n, multiplicador, n*multiplicador)]