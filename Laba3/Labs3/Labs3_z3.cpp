//#include <iostream>
//#include <locale>
//#include <cmath>
//#include <windows.h>
//float main() {
//	float a, b, x, z;
//	setlocale(LC_ALL, "Rus");
//	std::cout << "������� ���������� a: ";
//	std::cin >> a;
//	std::cout << "������� ���������� b: ";
//	std::cin >> b;
//	std::cout << "������� ���������� x: ";
//	std::cin >> x;
//	std::cout << "������� ���������� z: ";
//	std::cin >> z;
//	if (z < a * b) {
//		x = std::sqrt(std::pow(a, 2) + std::pow(b, 2) * z);
//	}
//	if (z >= a * b) {
//		x = std::pow(sin(z), 2) + std::abs(a * b * z);
//	}
//	float temp1 = a * x + b * x * cos(std::sqrt(x));
//	float temp2 = x + a * b;
//	float y = temp1 / temp2;
//	std::cout << "����� y = " << y;
// }