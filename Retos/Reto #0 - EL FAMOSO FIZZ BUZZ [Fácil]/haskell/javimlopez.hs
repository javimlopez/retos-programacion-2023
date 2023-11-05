fizzbuzz :: Integer -> String
fizzbuzz 0 = error "No puede ser cero" 
fizzbuzz x 
    | mod x 3 == 0 = "fizz"
    | mod x 5 == 0 = "buzz"
    | (mod x 3 == 0) && (mod x 5 == 0) = "fizzbuzz"
    | otherwise = show x 

imprimir = mapM_ putStrLn [fizzbuzz x | x <- [1..100]]