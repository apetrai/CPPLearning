#include <iostream>
#include <vector>
#include <iterator> //Iterator library must be included

int main() {
 std::vector<int> numbers(10);
 int buffer;
	
 //Iterators are pointer that point to the subscript of a container, in this case the vector: numbers.
 //Incrimenting the iterator increases the subscript that it points to.
 //auto is std::vector<int>::iterator type.
 for(auto it = numbers.begin(); it != numbers.end(); it++){
	std::cin >> *it;	
	*it *= 2;
	std::cout << *it << std::endl;
 }



 	return 0;
}

/* Exercise 3.23 Write a program to create a vector with 10 int elements. Using an
   iterator, assign each element a value that is twice it current value. Test your
   program by printing the vector.
*/

