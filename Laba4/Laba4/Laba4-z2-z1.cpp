#include <cmath> // variant2 or 18 z2-z1
#include <iostream>
int main() {
	setlocale(LC_ALL, "Rus");
	int f;	
	double x, y, a;
	std::cout << "Введите переменную x, y через пробел = ";
	std::cin >> x >> y;
	std::cout << "1. e^x\n2. x^2\nВыеберите функцию для расчета значений = ";
	std::cin >> f;
	switch (f) {
	case 1:
		f = exp(x);
		break;
	case 2:
		f = pow(x,2);
		break;
	default:
		std::cerr << "Произошла ошибка, в меню нет такого варианта...\n";
		return 0;
		break;
	}
	if (x * y > 0) {
		a = 1 + pow(f + y, 2);
	}
	else if (x * y < 0) {
		a = f - sqrt(
			abs(f * y)
		);
	}
	else {
		a = f + pow(y, 2);
	}
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	if (f == 1) {
		std::cout << "f(x) = exp(x)" << std::endl;
	}
	else {
		std::cout << "f(x) = x^2" << std::endl;
	}
	std::cout << "a = " << a << std::endl;
}