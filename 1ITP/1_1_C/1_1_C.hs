import Control.Applicative

main = do
  [a,b] <- map read . words <$> getLine
  putStrLn $ unwords [show (a * b), show (a * 2 + b * 2)]

