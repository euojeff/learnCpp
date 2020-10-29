#include <stdlib.h>
#include <iostream>
#include <vector>
#include "Matrix.h"
#include <time.h> 
#include <array>
#include <iomanip>


int getRand(int min, int max);
Matrix* randonSquareMatrix(int n, int minValue, int maxValue);
int countOccurrences(Matrix* matrix, int compareValue);
void printMatrix(Matrix* matrix);

struct Matrix {
public:
	Matrix(int rows, int cols);
	~Matrix();
	int Get(int line, int col);
	void Set(int line, int col, int value);
	int GetRows();
	int GetCols();
private:
	int rows;
	int cols;
	int* mat;
};

Matrix::Matrix(int rows, int cols) {
	mat = new int[rows * cols];
	this->rows = rows;
	this->cols = cols;
}

Matrix::~Matrix() {
	delete[] mat;
}

void Matrix::Set(int line, int col, int value) {
	mat[(line * cols) + col] = value;
}

int Matrix::Get(int line, int col) {
	return mat[(line * cols) + col];
}

int Matrix::GetCols() {
	return cols;
}

int Matrix::GetRows() {
	return rows;
}

Matrix* randonSquareMatrix(int n, int minValue, int maxValue) {
	srand(time(0));
	Matrix* matrix = new Matrix(n ,n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			matrix->Set(i, j, getRand(minValue, maxValue));

	return matrix;
}

int getRand(int min, int max) {
	return (rand() % (max + 1 - min)) + min;
}

int countOccurrences(Matrix* matrix, int compareValue) {

	size_t rows = matrix->GetRows();
	size_t cols  = matrix->GetCols();
	int occurrences = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix->Get(i, j) == compareValue) {
				occurrences++;
			}
		}
	}

	return occurrences;
}

void printMatrix(Matrix* matrix) {

	size_t rows = matrix->GetRows();
	size_t cols = matrix->GetCols();

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << std::setw(3) << matrix->Get(i, j);
			if (j + 1 < cols) {
				std::cout << ",";
			}else{
				std::cout << std::endl;
			}
		}
	}
}