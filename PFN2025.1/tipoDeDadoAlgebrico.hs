-- Tipo de dados algebricos
data Semana = Domingo | Segunda | Terca | Quarta | Quinta | Sexta | Sabado deriving (Show,Eq, Ord)

ehDiaUtil :: Semana -> Bool
ehDiaUtil dia = dia > Domingo && dia < Sabado

proximoDiaUtil :: Semana -> Semana
proximoDiaUtil Segunda = Terca
proximoDiaUtil Terca = Quarta
proximoDiaUtil Quarta = Quinta
proximoDiaUtil Quinta = Sexta
proximoDiaUtil _ = Segunda

data Dupla a b = Par a b deriving Show

meuZip :: [a] -> [b] -> [Dupla a b]
meuZip (x:xs) (y:ys) = Par x y : meuZip xs ys

data Lista a = a :+: (Lista a) | Nil deriving Show