#include <cmath>
#include <iostream>
int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите число = ";
	int num;
	std::cin >> num;
	if (num != 0 && num % 13 == 0) {
		std::cout << "Число " << num << " относится к группе A";
	}
	else if (num < 0 && num % 2 != 0) {
		std::cout << "Число " << num << " относится к группе B";
	}
	else if (num > 0 && num % 2 == 0) {
		std::cout << "Число " << num << " относится к группе C";
	}
	else {
		std::cout << "Число " << num << " относится к группе D";
	}
}