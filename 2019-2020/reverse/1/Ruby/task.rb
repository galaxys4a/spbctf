def f(n)
    (2..n).reduce(1, :*)
end

a = STDIN.readlines.map {|x| x.to_i}

puts (a.map {|x| f x}) ==
    [3628800, 265252859812191058636308480000000, 30414093201713378043612608166064768844377641568960512000000000000] ? "Correct" : "Incorrect"

