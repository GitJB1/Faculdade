
troca _ _ [] = []
troca x y (z:zs) = if z == x then y : troca x y zs else z : troca x y zs

zip' :: [a] -> [b] -> [(a,b)]
zip' (x:xs) (y:ys) = (x,y) : zip' xs ys
zip' _ _ = []