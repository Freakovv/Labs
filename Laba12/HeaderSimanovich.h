#pragma once
#include <iostream>

namespace memory {
	template <class T>
	void createMemory(T**& arr, int rows, int cols) {
		for (int i = 0; i < rows; ++i)
			arr[i] = new float[cols];
	}
	template <class T>
	void deleteMemory(T** array, int rows) {
		for (int i = 0; i < rows; ++i) {
			delete[] array[i];
		}
		delete[] array;
	}
}

namespace func {
	template <class T>
	T UpdateValue(T& value) {
		std::cout << "Введите число k:";
		std::cin >> value;
		return value;
	}
	void fillRowsAndCols(float& rows, float& cols) {
		std::cout << "Введите размеры массива\n";
		while (rows < 1 && cols < 1)
		{
			std::cout << "Строки: ";
			std::cin >> rows;
			std::cout << "Столбцы: ";
			std::cin >> cols;
			if (rows < 1 && cols < 1) {
				std::cerr << "Error: Значения должны быть больше нуля\n";
			}
		}
	}
}

namespace functions {
	template <class T>
	void fillArray(T** arr, T rows, T cols) {
		std::cout << "Введите элементы массива:\n";
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				std::cout << "array[" << i << "][" << j << "]: ";
				std::cin >> arr[i][j];
			}
		}
	}
	template <class T>
	void printArray(T** array, int rows, int cols) {
		std::cout << "Ваш массив:\n";
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				std::cout << array[i][j] << ' ';
			}
			std::cout << '\n';
		}
	}
	template <class T>
	T diagonalSumLessThanValue(T** array, T& diagonalSum, T rows, T cols, T value) {
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				if ((i == j) && (array[i][j] < value)){
					diagonalSum += array[i][j];
				}
			}
		}
		return diagonalSum;
	}
	template <class T>
	T ProductNotIncInDiagonal(T** array,T& product , T rows, T cols, T value) {
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				if ((i != j) && (array[i][j] > value)) {
					product *= array[i][j];
				}
			}
		}
		return product;
	}
	void z4(float** array, float rows, float cols) {
		float maxVal = array[0][0];
		int maxRow = 0;
		int maxCol = 0;
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				if (array[i][j] > maxVal) {
					maxVal = array[i][j];
					maxRow = i;
					maxCol = j;
				}
			}
		}
		std::cout << "Максимальное значение: " << maxVal << std::endl;
		std::cout << "Индексы первого максимального значения: [" << maxRow << "][" << maxCol << "]\n"
			<< std::endl;
	}
	float findAverage(float** array, float rows, float cols) {
		double sum = 0;
		int count = 0;
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				sum += array[i][j];
				count++;
			}
		}
		return sum / count;
	}
	float CountOfElements(float** array, float rows, float cols) {
		float avg = functions::findAverage(array, rows, cols);
		int count = 0;
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				if (pow(array[i][j], 2) > avg) {
					++count;
				}
			}
		}
		return count;
	}
}