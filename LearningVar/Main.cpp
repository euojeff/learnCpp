#include <iostream>
#include <cstdlib>
#include "Matrix.h"



int main() {

	

	Matrix* matrix = randonSquareMatrix(3, -50, 50);
	printMatrix(matrix);
	std::cout << std::endl;
	int occurrences = countOccurrences(matrix, 0);
	std::cout << occurrences << std::endl;
	delete matrix;

	system("PAUSE");
	return 0;
}