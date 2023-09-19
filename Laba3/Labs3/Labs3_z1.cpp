//#include <cmath>
//#include <Windows.h>
//#include <locale>
//#include <iostream>
//float main() {
//	setlocale(LC_ALL, "Rus");
//	float x, y, d, f;
//	std::cout << "Введите x = ";
//	std::cin >> x;
//	std::cout << "Введите y = ";
//	std::cin >> y;
//	int p;
//	std::cout << "Выберите функцию f:\n 1. sh(x)\n 2. x^2\n 3. e^x\n";
//	std::cin >> p;
//	switch (p) {
//	case 1:
//	{
//		f = sinh(x);
//		break;
//	}
//	case 2:
//	{
//		f = pow(x, 2);
//		break;
//	}
//	case 3:
//	{
//		f = exp(x);
//		break;
//	}
//	default:
//	{
//		system("cls");
//		std::cerr << "Error" << std::endl;
//		return 0;
//		break;
//	}
//	}
//	if (x > y) {
//		d = std::cbrt(std::abs(f - y)) + std::tan(f);
//	}
//	else if (x < y) {
//		d = std::pow(y - f, 3) + cos(f);
//	}
//	else {
//		d = std::pow(f + y, 2) + std::pow(x, 3);
//	}
//	std::cout << "Ответ d = " << d;
// }