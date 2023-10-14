#include <iostream>
#include <ctime>
void z1() {
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	const int size = 4;
	int arr[size][size] = {
		{ 13,14,15,16 },
		{ 1,2,3,4 },
		{ 5, 6, 7, 8 },
		{ 9,10,11,12 }
};
	for (int i = 0; i < size; i++)
	{
		
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] << " ";

		
		}
		std::cout << "\n";
	
	}
	int sum = 0;
	int sum_temp = 0;
	int stroka=0;
	for (int i = 1; i < size; i++)
	{
		for (int j = 1; j < size; j++)
		{
			sum_temp += arr[i][j];
			sum += arr[i-1][j-1];
			if (sum > sum_temp) {
				stroka = i;
			}
		}

		sum_temp = 0;
		sum = 0;
	}
	std::cout << "Строка с наименьшей суммой элементов: " << stroka << std::endl;
}
int main()
{
	z1();
}
