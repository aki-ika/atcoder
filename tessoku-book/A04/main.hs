main = do
    n <- readLn
    putStrLn $ (padding . dec2bin) n

dec2bin x
    | x == 0 = show $ x `mod` 2
    | x == 1 = show $ x `mod` 2
    | otherwise = dec2bin (x `div` 2) ++ show (x `mod` 2)

padding x
    | length x == 10 = x
    | otherwise = padding $ "0" ++ x