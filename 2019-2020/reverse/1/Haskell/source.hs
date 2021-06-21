import System.IO
-- https://en.wikibooks.org/wiki/Haskell/Pattern_matching
-- next line after commentary tells that
-- function takes list of elements any type which implement a following functions:
-- (+), (*), abs, signum, fromInteger, (negate | (-))
-- and return list of same type
--  ++ is a list concatenation [1]++[2] == [1,2]
calculate1 :: Num a =>[a] -> [a]
calculate1 (x:[]) = [x*4]
calculate1 (x:y:[]) = [(x+y)*5] ++ (calculate1 [y])
calculate1 (x:y:xs) = (calculate1 [x,y]) ++ (calculate1 xs)


-- this function convert string(list of Char) into list of Int
to_int :: [Char] -> [Int]
to_int (first_element:[]) = [fromEnum first_element]
to_int (first:tail) = [fromEnum first] ++ (to_int tail)


-- function takes two lists and return True if they are equal
compare_lists :: Eq a => [a] -> [a] -> Bool
compare_lists [] (one_elem) = False
compare_lists (one_elem) [] = False
compare_lists (first_list1:[]) (first_list2:[]) =  (==) first_list1 first_list2
compare_lists (first_list1:tail_list1) (first_list2:tail_list2) =  ((==) first_list1 first_list2)
                                                                   &&
                                                                   (compare_lists tail_list1 tail_list2)



main = do
       user_input <- getLine
       putStrLn(
         show(compare_lists
               (calculate1 (to_int user_input))
               [730,304,680,284,860,196,505,204,1020,408,1000,396,995,408,995,392,975,392,1130,500]
          )
        )
