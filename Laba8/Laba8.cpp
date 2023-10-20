#include <iostream>
#include <ctime>
#include <vector>
template <typename T>
void PrintArray(T* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}
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
void z1(int size_n,int size_m) {
	int sum_a = 0;
	int sum_b = 0;
    int* a = fill_int_array(size_n);
	int* b = fill_int_array(size_m);
	printf("\nМассив A:");
	for (int i = 0; i < size_n; i++)
	{
		sum_a += *(a + i);
		std::cout << *(a + i) << "\t";
	}
	printf("\nМассив B:");
	for (int i = 0; i < size_m; i++)
	{
		std::cout << *(b + i) << "\t";
		sum_b += *(b + i);
	}
	if (sum_a > sum_b) {
		std::cout << "\n" << sum_a;
	}
	else if (sum_a == sum_b) {
		std::cerr << "\nЗадача не имеет решения\n";
	}
	else {
		std::cout << "\n" << sum_b;
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
			goto label1;
		}
		sum += *(arr + i);
	}
label1:
	delete[] arr;
	if (sum > 0) {
		std::cout << "Сумма элементов до последнего положительного элемента: " << sum << std::endl;
	}
	else {
		std::cerr << "Положительные элементы отсувствуют\n";
	}
}
void z3(int size) {
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
	std::cout << "Наиболее близкий элемент к числу R: " << result << std::endl;
	delete[] arr;
}
void z4() {
	double arr[]{ 3.24,-7.16,2.28,-0.16,-3.22,7.14,2.88,3.20,0.99,4.15 };
	int size = 10;
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 2) {
			++count;
		}

	}

}
int main()
{
label:
	setlocale(LC_ALL, "Rus");
	int p;
	std::cin >> p;
	switch (p)
	{
	case 1:
		int sizeA;
		int sizeB;
		printf("Введите размер a массива: ");
		std::cin >> sizeA;
		printf("\nВведите размер b массива: ");
		std::cin >> sizeB;
		z1(sizeA, sizeB);
		goto label;
		break;
	case 2:
		z2();
		goto label;
		break;
	case 3:
		int size3 = 10;
		z3(size3);
		goto label;
		break;
	//default:
	//	goto label;
	//	break;
	}
}