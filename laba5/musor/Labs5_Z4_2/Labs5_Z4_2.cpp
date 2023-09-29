#include <iostream>
#include <cmath>
int main() {
	setlocale(LC_ALL, "Rus");
	double y, sum = 0, temp, x;
	std::cout << "Введите число x = ";
	std::cin >> x;
	int n,k = 1;
	std::cout << "Введите число итераций = ";
	std::cin >> n;
	double h = (b - a) / n;S
	for (; k <= n; ++k)
	{
		sum += pow(-1, k + 1) * sin(k * x);
		std::cout << "Итерация " << k << " = " << sum << "\n";
		y = x / 2;
	}
	std::cout << "Итог = " << sum;
}