#include <cmath>
#include <iostream>
int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "������� ����� = ";
	int num;
	std::cin >> num;
	if (num != 0 && num % 13 == 0) {
		std::cout << "����� " << num << " ��������� � ������ A";
	}
	else if (num < 0 && num % 2 != 0) {
		std::cout << "����� " << num << " ��������� � ������ B";
	}
	else if (num > 0 && num % 2 == 0) {
		std::cout << "����� " << num << " ��������� � ������ C";
	}
	else {
		std::cout << "����� " << num << " ��������� � ������ D";
	}
}