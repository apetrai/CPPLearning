#include <iostream>
#include <iterator>
#include <cstddef>

int main() {

int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int arr2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 8};

int *pt1;
int *pt2 = arr2; //Refers the same as &arr2[0]

for(pt1 = arr1; arr1 <= &arr1[10]; pt1++) {
	if(pt2 == std::end(arr2))
		break;
	if(*pt1 == *pt2)
		std::cout << "Equal" << std::endl;
	else
		std::cout << "Not Equal" << std::endl;
	pt2++;
 }
	return 0;
}

/* Excersise: 3.36  Write a program to compare two arrays for equality */

