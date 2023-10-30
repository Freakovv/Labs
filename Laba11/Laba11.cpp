#include <iostream>

bool check_even_numbers(int* arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 2 == 0) {
			count++;
		}
	}
	if (count == size) {
		return true;
	}
	else {
		return false;
	}
}

int check_sum_massiv(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 3 == 0) {
			sum += *(arr + i);
		}
	}
	return sum;
}
int check_prod_massiv(int* arr, int size) {
	int prod = 1;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 3 == 0) {
			prod *= *(arr + i);
		}
	}
	return prod;
}

int main()
{
	int size = 4;
	int arr[]{ 2,4,6,8 };
	//std::cout << check_even_numbers(arr, size) << std::endl;
	std::cout << check_sum_massiv(arr, size) << std::endl;
	std::cout << check_prod_massiv(arr, size);

}
