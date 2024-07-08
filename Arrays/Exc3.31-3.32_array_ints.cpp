#include <iostream>
#include <cstddef> 
//Include cstddef library to access size_t which is a unsigned machine-specific type guaranteed to hold the size of any object in memory

int main() {
int arr[10] = {0,1,2,3,4,5,6,7,8,9};
int abb[10] = arr;
//You cannot copy an array to another array, however you can refer or point to an array. This program will run successfully with vectors.
	
	return 0;
}
