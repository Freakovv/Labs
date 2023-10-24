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
double find_max_element(double array[], int size) {
	double maxElement = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > maxElement) {
			maxElement = array[i];
		}
	}
	return maxElement;
}
void z1() {
	int size_n;
	int size_m;
	printf("������� ������ a �������: ");
	std::cin >> size_n;
	printf("\n������� ������ b �������: ");
	std::cin >> size_m;
	int sum_a = 0;
	int sum_b = 0;
    int* a = fill_int_array(size_n);
	int* b = fill_int_array(size_m);
	printf("\n������ A:");
	for (int i = 0; i < size_n; i++)
	{
		sum_a += *(a + i);
		std::cout << *(a + i) << "\t";
	}
	printf("\n������ B:");
	for (int i = 0; i < size_m; i++)
	{
		std::cout << *(b + i) << "\t";
		sum_b += *(b + i);
	}
	if (sum_a > sum_b) {
		std::cout << "\n" << sum_a;
	}
	else if (sum_a == sum_b) {
		std::cerr << "\n������ �� ����� �������\n";
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
	printf("\n������: ");
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
		std::cout << "����� ��������� �� ���������� �������������� ��������: " << sum << std::endl;
	}
	else {
		std::cerr << "������������� �������� �����������\n";
	}
}
void z3() {
	int size = 10;
	double* arr = fill_double_array(size);
	printf("\n������: ");
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
	std::cout << "�������� ������� ������� � ����� R: " << result << std::endl;
	delete[] arr;
}
//void z4() {
//	double arr[]{ 3.24,-7.16,2.28,-0.16,-3.22,7.14,2.88,3.20,0.99,4.15 };
//	int size = 10;
//	double* arr1 = new double[size];
//	double zxc = 5.71;
//	int count = 0;
//	//1
//	for (int i = 0; i < size; i++)
//	{
//		if (*(arr + i) < 2) {
//			++count;
//		}
//	}
	////2
	//int sum = 0;
	//for (int i = size;; --i)
	//{
	//	if (*(arr + i) > 0) {
	//		sum += *(arr + i);
	//	}
	//	else {
	//		goto label1;
	//	}
	//}
	//label1:
	//double maxElement = find_max_element(arr, size);
	//int count = 0;
	//int newIndex = 0;
	//for (int i = 0; i < size; i++) {
	//	if (arr[i] >= zxc) {
	//		arr1[i] = arr[i];
	//	}
	//}
	//printf("\n������:\n");
	//PrintArray(arr, size);
	//printf("\n���������� ������:\n");
	//PrintArray(arr1, size);
	//
//}
int main()
{
label:
	setlocale(LC_ALL, "Rus");
	int p;
	std::cin >> p;
	switch (p)
	{
	case 1:
		z1();
		goto label;
		break;
	case 2:
		z2();
		goto label;
		break;
	case 3:
		z3();
		goto label;
		break;
	//case 4:
	//	z4();
	//	goto label;
	//	break;
	//}
}