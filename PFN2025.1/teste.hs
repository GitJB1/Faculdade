main = putStrLn "Hello, Haskell!"
fat 0 = 1
fat n = n * fat(n-1)

pot b 0 = 1
pot b e = b * pot b (e - 1)

mdc a b | a == b = a
        | a > b = mdc (a - b) b
        | otherwise = mdc a (b - a)


-- isso eh um comentario

{- isso eh
   um comentario
   de varias linhas -}
