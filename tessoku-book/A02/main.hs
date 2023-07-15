main = do
    [_, x] <- map read . words <$> getLine :: IO [Int]
    as <- map read . words <$> getLine :: IO [Int]
    if elem x as
        then
            putStrLn "Yes"
        else
            putStrLn "No"