#include <cmath> // var2/18 z1
#include <iostream>
const float fi = 1.618;
int main() {
	setlocale(LC_ALL, "Rus");
	float null, t2;
	std::cout << "Число Ф = 1.618\n";
	std::cout << "Введите число null = ";
	std::cin >> null;
	if (abs(fi) > 5 * abs(null)) {
		t2 = log(
			abs(2 * fi - 3 * exp(2) * null));
	}
	if (5 * abs(null) < abs(fi) 
		&& abs(fi) <= 7.5 * abs(fi)
			) {
		t2 = log(abs(2 * pow(fi, 2) - 3 * null));
	}
	else {
		std::cerr << "Произошла ошибка!!!\n";
		return 0;
	}
	std::cout << "t2 = " << t2;
}