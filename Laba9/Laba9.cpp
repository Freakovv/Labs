#include <iostream>
#include <windows.h>
#include <ctime>
//functions
template <class T>
void fill_array_by_keyboard(T arr, int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << "arr[" << i << "]" << "[" << j << "]: ";
			std::cin >> arr[i][j];
		}
	}
}
template <typename T>
void PrintArray(T* arr, int rows, int cols) {
	std::cout << std::endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << "\t|\t";
		}
		std::cout << std::endl;
	}
}
template <class T>
void delete_memory(T arr,int rows) {
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = NULL;
}
double* fill_double_array(int size) {
	srand(time(NULL));
	double* array = new double[size];
	for (int i = 0; i < size; i++)
	{
		double decimalPart = (rand() % 10) / 10.0;
		array[i] = static_cast<double>(rand() % 10 + 1) + decimalPart;
	}
	return array;
}
//solution
void z1(int rows, int cols) {
	printf("z1 -->\n");
	char** arr = new char* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new char[cols];
		if (arr[i] == NULL) {
			std::cerr << "Не удалось выделить память для строки";
			break;
		}
	}
	fill_array_by_keyboard(arr, rows, cols);
	PrintArray(arr, rows, cols);
	delete_memory(arr, rows);
}
void z2(int rows, int cols) {
	printf("z2 -->\n");
	double** arr = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new double[cols];
		if (arr[i] == NULL) {
			std::cerr << "Не удалось выделить память для строки";
		}
	}
	fill_array_by_keyboard(arr, rows, cols);
	std::cout << "Print array:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	delete_memory(arr, rows);
}
void z3(int rows, int cols) {
	printf("z3 -->\n");
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		if (arr[i] == NULL) {
			std::cerr << "Не удалось выделить память для строки";
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 8 - 9;
		}
	}
	std::cout << "Show massiv:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << " ; ";
		}
		std::cout << std::endl;
	}
	std::cout << "Show reverse massiv:\n";
	for (int i = rows-1; i > -1; i--)
	{
		for (int j = cols-1; j > -1; j--)
		{
			std::cout << arr[i][j] << " ; ";
		}
		std::cout << std::endl;
	}
	delete_memory(arr, rows);
}
void z4(int rows, int cols) {
	int** arr = new int* [cols];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		if (arr[i] == NULL) {
			std::cerr << "Не удалось выделить память для строки\n";
			break;
		}
	}
	int value = -100;
	int n1;
	std::cout << "\nvalue = -100\nВведите n1 = ";
	std::cin >> n1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = value;
			value += 3; 
			if (value > n1) {
				value = -100;
			}
		}
	}
	PrintArray(arr, rows, cols);
	printf("\nPrint new massiv:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] *= 2;
		}
	}
	PrintArray(arr, rows, cols);
	delete_memory(arr, rows);
}
void z5(int rows, int cols) {
	double** arr = new double* [cols];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new double[cols];
		if (arr[i] == NULL) {
			std::cerr << "Не удалось выделить память для строки\n";
			break;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			double decPart = (rand() % 10) / 10.0;
			arr[i][j] = static_cast<double>(rand() % 10 + 1) + decPart;
		}
	}
	PrintArray(arr, rows, cols);
	printf("New vision of array:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i != 3 && j != 3) {
				std::cout << arr[i][j] << "\t|\t";
			}
		}
		std::cout << std::endl;
	}
}
void Z2() {
	const int rows = 10;
	const int cols = 10;
	int m[rows][cols] = {
		{ 16, 78, 0, 6, -29, 19, -52, 65, -88, 51},
		{ -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
		{ -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
		{ 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
		{ -99, -21, -95, 64, 22, -2, 69, -84, -1 ,71},
		{ -25 ,47 ,72 ,43 ,15 ,-44 ,44 ,61 ,4 ,74},
		{88 ,-61 ,0 ,-64 ,-83 ,97 ,0 ,90 ,15 ,8},
		{-54 ,99 ,73 ,35 ,-67 ,-87 ,85 ,-93 ,-70 ,10},
		{98 ,58 ,-10 ,-29 ,95 ,62 ,77 ,89 ,36 ,-32},
		{78 ,60 ,-79 ,-18 ,30 ,-13 ,-34 ,-92 ,1 ,-38}
	};
	int sum_positive_rows = 0;
	for (int i = 0; i < rows; i++) {
		bool haveNegative = false;
		int sum_row = 0;
		for (int j = 0; j < cols; j++) {
			if (m[i][j] < 0) {
				haveNegative = true;
				break;
			}
			sum_row += m[i][j];
		}
		if (!haveNegative) {
			sum_positive_rows += sum_row;
		}
	}
	int min_sum = 999999;
	for (int i = -(rows - 1); i <= (cols - 1); ++i) {
		int sum_diag = 0;
		for (int y = max(0, -i); y < min(rows, (rows - i)); ++y) {
			sum_diag += m[y][y + i];
		}
		if (sum_diag < min_sum) {
			min_sum = sum_diag;
		}
	}
	std::cout << "Сумма элементов в строках без отрицательных элементов: " << sum_positive_rows << std::endl;
	std::cout << "Минимум среди сумм элементов диагоналей: " << min_sum << std::endl;
}

int main()
{
label:
	srand(time(0));
	int rows = 0;
	int cols = 0;
	while ((rows < 1) || (cols < 1)) {
		std::cerr << "Rows and cols != 0" << std::endl;
		std::cout << "Enter number of rows: ";
		std::cin >> rows;
		std::cout << "Enter number of cols: ";
		std::cin >> cols;
	}
	bool While = true;
	while (While) {
		int switcher = 0;
		std::cout << "Select:\n1. zadanie1_1\n2. zadanie1_2\n3. zadanie1_3\n4. zadanie1_4\n5. zadanie1_5\n6. zadanie2\n7. EXIT\n8. Enter new rows and cols\n";
		std::cin >> switcher;
		switch (switcher)
		{
		case 1:
			z1(rows, cols);
			std::cout << std::endl;
			break;
		case 2:
			z2(rows, cols);
			std::cout << std::endl;
			break;
		case 3:
			z3(rows, cols);
			std::cout << std::endl;
			break;
		case 4:
			z4(rows, cols);
			std::cout << std::endl;
			break;
		case 5:
			z5(rows, cols);
			std::cout << std::endl;
			break;
		case 6:
			Z2();
			std::cout << std::endl;
			break;
		case 7:
			While = false;
			break;
		case 8:
			printf("\nGoodbye!\n");
			goto label;
		default:
			"Введено неверное значение";
			While = false;
			break;
		}
	}
}

