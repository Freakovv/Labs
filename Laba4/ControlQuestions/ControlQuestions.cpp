#include <iostream> // � ������� � ���� �������� 2 ������ ����� �� ������)))
#include "Header.h"
#include <Windows.h>
int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "������ 1 -->\n";
	question1();
	std::cout << "������ 3 a) -->\n";
	question3a();
	std::cout << "������ 3 b) -->\n";
	question3b();
	std::cout << "������ 3 c) -->\n";
	question3c();
	std::cout << "������� �� ����� ������ ����� ������� ������ �� �������!";
	system("pause");
	std::cout << "������ �� ������� 3:\n a) ((x > -100) || (x > 100))\n ";
	std::cout << "b) (y != 100 && y != 101)\nc) ((x != a) || (x = b))";
}
void question1(){
	float x, y, temp1;
	std::cout << "������� x, y = ";
	std::cin >> x >> y;
	if ((x > 0 && y < 0) || (x < 0 && y>0)) // ����� question 1
	{
		temp1 = x;
		x = y;
		y = temp1;
		std::cout << "x = " << x << "\ny = " << y << std::endl;
	}
	else {
		x *= 3;
		std::cout << "x = " << x << "\ny = " << y << std::endl;
	}
}
void question3a() {
	float x;
	std::cout << "������� x = ";
	std::cin >> x;
	if ((x > -100) || (x > 100)) // ����� a)
	{
		std::cout << "x ������ -100 ��� ������ 100\n";
	}
	else {
		std::cout << "x ������ -100 ��� ������ 100\n";
	}
}
void question3b() {
	float y;
	std::cout << "������� y = ";
	std::cin >> y;
	if (y != 100 && y != 101) // ����� b)
	{
		std::cout << "y �� ����������� ��������� [100; 101]\n";
	}
	else {
		std::cout << "y ����������� ��������� [100; 101]\n";
	}
}
void question3c() {
	int x, a, b;
	std::cout << "������� x, a, b = ";	
	std::cin >> x >> a >> b;
	if ((x != a) || (x = b)) // ����� c)
	{
		std::cout << "x �� ����� a ��� x ����� b\n";
	}
	else {
		std::cout << "x ����� � ��� x ����� b\n";
	}
}
