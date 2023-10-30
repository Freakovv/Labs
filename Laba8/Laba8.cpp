#include <iostream>
#include <ctime>
#include <cmath>
int* fill_int_array(int size) {
	int* arr = new int[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = (rand() % 20) - 10;
	}
	return arr;
}
double* fill_double_array(int size) {
	srand(time(NULL));
	double* array = new double[size];
	for (int i = 0; i < size; i++)
	{
		double decPart = (rand() % 10) / 10.0;
		array[i] = static_cast<double>(rand() % 10 + 1) + decPart;
	}
	return array;
}
template <class T>
void PrintArray(T* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}

void z1() {
	int size_n = 3;
	int size_m = 2;
	int prod_a = 1;
	int prod_b = 1;
	int* a = fill_int_array(size_n);
	int* b = fill_int_array(size_m);
	for (int i = 0; i < size_n; i++)
	{
		prod_a *= *(a + i);

	}
	for (int i = 0; i < size_m; i++)
	{
		prod_b *= *(b + i);
	}
	if (prod_a > prod_b) {
		printf("\nМассив A:\t");
		PrintArray(a, size_n);

	}
	else if (prod_a == prod_b) {
		std::cerr << "\nЗадача не имеет решения\n";
	}
	else {
		printf("\nМассив B: ");
		PrintArray(b, size_m);
	}
	delete[]a;
	delete[]b;
}
void z2() {
	int size = 10;
	int sum = 0;
	int* arr = fill_int_array(size);
	printf("\nМассив: ");
	PrintArray(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0) {
			goto label;
		}
		sum += *(arr + i);
	}
label:
	delete[] arr;
	if (sum > 0) {
		std::cout << "Сумма элементов до последнего положительного элемента: " << sum << std::endl;
	}
	else {
		std::cerr << "Отрицательный элемент первый\n";
	}
}
void z3() {
	int size = 10;
	double* arr = fill_double_array(size);
	printf("\nМассив: ");
	PrintArray(arr, size);
	double R = 3.14;
	std::cout << "R = " << R << "\n";
	double min = std::abs(R - arr[0]);
	double result = 0;
	for (int i = 1; i < size; i++) {
		double diff = std::abs(R - arr[i]);
		if (diff < min) {
			min = diff;
			result = arr[i];
		}
	}
	delete[] arr;
	std::cout << "Наиболее близкий элемент к числу R: " << result << std::endl;
}
void z4() {
	double arr[] = { 3.24, -7.16, 2.28, -0.16, -3.22, 7.14, 2.88, 3.20, 0.99, 4.15 };
	const int size = sizeof(arr) / sizeof(arr[0]);
	// 1
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 2) {
			count++;
		}
	}
	std::cout << "Количество элементов меньше 2: " << count << std::endl;
	// 2
	int lastNegativeNumber = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			lastNegativeNumber = i;
		}
	}
	int sum = 0;
	for (int i = lastNegativeNumber + 1; i < size; i++) {
		sum += (int)arr[i];
	}
	std::cout << "Сумма целых частей элементов после последнего отрицательного: \n" << sum << std::endl;
	// 3
	double maxElement = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > maxElement) {
			maxElement = arr[i];
		}
	}
	double arr1[size], arr2[size];
	int k1 = 0, k2 = 0;
	for (int i = 0; i < size; i++) {
		if (std::abs(arr[i] - maxElement) <= maxElement * 0.2) {
			arr1[k1++] = arr[i];
		}
		else {
			arr2[k2++] = arr[i];
		}
	}
	for (int i = 0; i < k1; i++) {
		arr[i] = arr1[i];
	}
	for (int i = k1; i < size; i++) {
		arr[i] = arr2[i - k1];
	}
	std::cout << "Преобразованный массив:\n";
	PrintArray(arr, size);
}

int main() {
	setlocale(LC_ALL, "Rus");
	printf("zadanaie 1 --> ");
	z1();
	printf("\nzadanaie 2 --> ");
	z2();
	printf("\nzadanaie 3 --> ");
	z3();
	printf("\nzadanaie 4 --> \n");
	z4();
	std::cout << "\n";
}