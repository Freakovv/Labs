#include <iostream> // Laba4-z2-z3 var18
int main() {
	setlocale(LC_ALL, "Rus");
	int square, cs;
	std::cout << "������� ������� = ";
	std::cin >> square;
	if (square >= 83000) {
		std::cout << "������� �� ����� 83000 ��.�� ����� ��������� �����������:\n";
		cs = 1;
	}
	else if (square < 83000 && square > 0) {
		std::cout << "������� ����� 83000 ��.�� ����� ��������� �����������:\n";
		cs = 2;
	}
	else {
		cs = 3;
	}
	switch (cs)
	{
	case 1:
std::cout << "������� - 504000\n������ - 301000\n�������������� - 244000\n";
std::cout << "������ - 132000\n�������� - 110000\n������� - 83000\n";
		break;
	case 2:
std::cout << "�������� - 70000\n������ - 65000\n����� - 43000\n";
std::cout << "������� - 30000\n�������  - 500\n����������� - 200\n������� - 100\n";
		break;
	default:
		std::cerr << "��������� ������";
		break;
	}
}