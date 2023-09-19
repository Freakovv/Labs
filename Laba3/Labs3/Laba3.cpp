#include <cmath>
#include <Windows.h>
#include <locale>
#include <iostream>
void z1() {
	setlocale(LC_ALL, "Rus");
	float x, y, d, f;
	std::cout << "������� x = ";
	std::cin >> x;
	std::cout << "������� y = ";
	std::cin >> y;
	int p;
	std::cout << "�������� ������� f:\n 1. sh(x)\n 2. x^2\n 3. e^x\n";
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
	std::cout << "����� d = " << d;
}
void z2() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	std::cout << "������� a: ";
	std::cin >> a;
	std::cout << "������� b: ";
	std::cin >> b;
	std::cout << "������� c: ";
	std::cin >> c;
	if ((a == b) || (b == c) || (c == a)) {
		std::cout << "����������� �������� ��������������";
	}
	else {
		std::cout << "����������� �� �������� ��������������";
	}
}
void z3() {
	float a, b, x, z;
	setlocale(LC_ALL, "Rus");
	std::cout << "������� ���������� a: ";
	std::cin >> a;
	std::cout << "������� ���������� b: ";
	std::cin >> b;
	std::cout << "������� ���������� x: ";
	std::cin >> x;
	std::cout << "������� ���������� z: ";
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
	std::cout << "����� y = " << y;
}
void z4() {
	setlocale(LC_ALL, "Rus");
	float x, y, z;
	std::cout << "������� ���������� x: ";
	std::cin >> x;
	std::cout << "������� ���������� y: ";
	std::cin >> y;
	std::cout << "������� ���������� z: ";
	std::cin >> z;
	float n = min(x + y, y - z) / max(x, y);
	std::cout << "����� n = " << n;
}

int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "������ ������� --> " << std::endl;
		z1();
		std::cout << std::endl;
		std::cout << std::endl;
	std::cout << "������ ������� --> " << std::endl;
		z2();
		std::cout << std::endl;
		std::cout << std::endl;
	std::cout << "������ ������� --> " << std::endl;
		z3();
		std::cout << std::endl;
		std::cout << std::endl;
	std::cout << "��������� ������� --> " << std::endl;
		z4();
}
