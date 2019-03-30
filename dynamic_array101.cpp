#include <iostream>

int main(void) {
	int size, i;
	int *p;

	// Prompt user to enter size of array
	std::cout << "Enters size of array: ";
	std::cin >> size;

	// Ensure size is greater than zero
	// prior proceeding to initialize
	// array
	if (size > 0)
		p = new int [size];
	else
		return 1;

	std::cout << "Enter number: " << std::endl;
	for (i = 0; i < size; i++) {
		std::cout << i+1 << ". ";
		std::cin >> p[i];
	}

	// Print out entered numbers from the array
	for (i = 0; i < size; i++)
		std::cout << i+1 << ". " << p[i] << std::endl;

	//Freeing memory with delete
	delete [] p; 	// Free memory allocated for the array.
	p = NULL; 		// Ensure that the deallocated memory is not used.

	return 0;
}
