# Why write .begin() + (end() - begin()) /2; | Instead of (begin() + end()) / 2; ?

First, there is no operator + for two iterators. Second, for arithmetic types, using mid = (beg + end) / 2 may lead to overflow.
There is a operator for subtracting two iterators directly which yields a difference_type which is signed.
However, to add 2 iterators the only operator supported is iterator + integral type, in order to add two iterator types, such as when to find the midpoint of a container like vector, do .begin() + (.size() / 2);
.size() / 2 yields an intergral value which can be used to add to the iterator .begin() which finds the closest midpoint of the container, e.g. vector.
