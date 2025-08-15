f x = 2 * x + 1
g x y = 2 * x + y

maior a b = if a > b then a else b
maior3 a b c = maior (maior a b) c
maior4 a b c d = maior (maior3 a b c) d
maior5 a b c d e = maior (maior4 a b c d) e