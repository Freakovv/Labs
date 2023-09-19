#include <cmath>
#include <Windows.h>
#include <locale>
#include <iostream>
void z1() {
	setlocale(LC_ALL, "Rus");
	float x, y, d, f;
	std::cout << "Введите x = ";
	std::cin >> x;
	std::cout << "Введите y = ";
	std::cin >> y;
	int p;
	std::cout << "Выберите функцию f:\n 1. sh(x)\n 2. x^2\n 3. e^x\n";
	std::cin >> p;
	switch (p) {
	case 1:
	{
		f = sinh(x);
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		break;
	}
	case 3:
	{
		f = exp(x);
		break;
	}
	default:
	{
		std::cerr << "Error" << std::endl;
		Sleep(400);
		system("cls");
		break;
	}
	}
	if (x > y) {
		d = std::cbrt(std::abs(f - y)) + std::tan(f);
	}
	else if (x < y) {
		d = std::pow(y - f, 3) + cos(f);
	}
	else {
		d = std::pow(f + y, 2) + std::pow(x, 3);
	}
	std::cout << "Ответ d = " << d;
}
void z2() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	std::cout << "Введите a: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите c: ";
	std::cin >> c;
	if ((a == b) || (b == c) || (c == a)) {
		std::cout << "Треугольник является равнобедренным";
	}
	else {
		std::cout << "Треугольник не является равнобедренным";
	}
}
void z3() {
	float a, b, x, z;
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите переменную a: ";
	std::cin >> a;
	std::cout << "Введите переменную b: ";
	std::cin >> b;
	std::cout << "Введите переменную x: ";
	std::cin >> x;
	std::cout << "Введите переменную z: ";
	std::cin >> z;
	if (z < a * b) {
		x = std::sqrt(std::pow(a, 2) + std::pow(b, 2) * z);
	}
	if (z >= a * b) {
		x = std::pow(sin(z), 2) + std::abs(a * b * z);
	}
	float temp1 = a * x + b * x * cos(std::sqrt(x));
	float temp2 = x + a * b;
	float y = temp1 / temp2;
	std::cout << "Ответ y = " << y;
}
void z4() {
	setlocale(LC_ALL, "Rus");
	float x, y, z;
	std::cout << "Введите переменную x: ";
	std::cin >> x;
	std::cout << "Введите переменную y: ";
	std::cin >> y;
	std::cout << "Введите переменную z: ";
	std::cin >> z;
	float n = min(x + y, y - z) / max(x, y);
	std::cout << "Ответ n = " << n;
}

int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "Первое задание --> " << std::endl;
		z1();
		std::cout << std::endl;
		std::cout << std::endl;
	std::cout << "Второе задание --> " << std::endl;
		z2();
		std::cout << std::endl;
		std::cout << std::endl;
	std::cout << "Третье задание --> " << std::endl;
		z3();
		std::cout << std::endl;
		std::cout << std::endl;
	std::cout << "Четвертое задание --> " << std::endl;
		z4();
}
