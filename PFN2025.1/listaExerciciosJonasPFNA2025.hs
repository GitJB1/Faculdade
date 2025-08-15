
-- Exercicio 1
ehTriangulo a b c = a + b > c && b + c > a && a + c > b

-- Exercicios 2
tipoTriangulo a b c| a == b && a == c = "Equilatero"
                   | a == b || a == b || b == c = "Isosceles"
                   | otherwise = "Escaleno"

-- Exercicio 3
triangulo a b c = if ehTriangulo a b c then tipoTriangulo a b c
                  else "nao eh um triangulo"

-- Exercicio 4
ehImpar n = n `mod` 2 /= 0
somaPares 0 = 0
somaPares n = if ehImpar n then somaPares(n-1)
              else n + somaPares(n-2)

-- Exercicio 5
somaPot2m m 0 = 2^0*m
somaPot2m m n = 2^n*m + somaPot2m m (n-1)

-- Exercicio 6
divEhprimo n d
    | rem n d == 0 = False
    | fromIntegral(d*d) > sqrt(fromIntegral n) = True
    | otherwise = divEhprimo n (d+1)
primo 2 = True
primo n = divEhprimo n 2

-- Exercicio 7
{-
n -> denominador limite da serie
d -> denominador que vai ser iterado
vai calcular 4/d < 4/n
-}

SeriePI :: Int -> Double
SeriePI n = calculaSeriePINegativo n 1

calculaSeriePINegativo n d = if 4/d < 4/n then 4/d
    else 4/d - calculaSeriePIPositivo(n (d+2))

calculaSeriePIPositivo n d = if 4/d < 4/n then 4/d
    else 4/d + calculaSeriePINegativo(n (d+2))