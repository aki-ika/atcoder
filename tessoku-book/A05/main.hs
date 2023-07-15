main = do
    [n, k] <- map read . words <$> getLine
    print $ length [k-(a+b) |  a <- [1..n], b <- [1..n],  k-(a+b) > 0, k-(a+b) <= n]
