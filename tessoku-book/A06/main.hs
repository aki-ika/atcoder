import Control.Monad
import qualified Data.Array.Unboxed as VU
main = do
    [n, q] <- map read . words <$> getLine
    ns <- map read . words <$> getLine
    let prefixSum = VU.listArray (0,n) $ scanl (+) 0 ns :: VU.Array Int Int -- 累積和
    replicateM_ q $ do
        [l, r] <- map read . words <$> getLine
        putStrLn $ show $ (prefixSum VU.! r) - (prefixSum VU.! (l-1))