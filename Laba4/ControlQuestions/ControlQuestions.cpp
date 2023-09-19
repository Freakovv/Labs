#include <iostream> // В условии к лабе написано 2 вопрос можно не делать)))
#include "Header.h"
#include <Windows.h>
int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "Вопрос 1 -->\n";
	question1();
	std::cout << "Вопрос 3 a) -->\n";
	question3a();
	std::cout << "Вопрос 3 b) -->\n";
	question3b();
	std::cout << "Вопрос 3 c) -->\n";
	question3c();
	std::cout << "Нажмите на любую кнопку чтобы увидеть ответы на вопросы!";
	system("pause");
	std::cout << "Ответы на вопросы 3:\n a) ((x > -100) || (x > 100))\n ";
	std::cout << "b) (y != 100 && y != 101)\nc) ((x != a) || (x = b))";
}
void question1(){
	float x, y, temp1;
	std::cout << "Введите x, y = ";
	std::cin >> x >> y;
	if ((x > 0 && y < 0) || (x < 0 && y>0)) // Ответ question 1
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
	std::cout << "Введите x = ";
	std::cin >> x;
	if ((x > -100) || (x > 100)) // Ответ a)
	{
		std::cout << "x больше -100 или больше 100\n";
	}
	else {
		std::cout << "x меньше -100 или меньше 100\n";
	}
}
void question3b() {
	float y;
	std::cout << "Введите y = ";
	std::cin >> y;
	if (y != 100 && y != 101) // Ответ b)
	{
		std::cout << "y не пренадлежит диапазону [100; 101]\n";
	}
	else {
		std::cout << "y пренадлежит диапазону [100; 101]\n";
	}
}
void question3c() {
	int x, a, b;
	std::cout << "Введите x, a, b = ";	
	std::cin >> x >> a >> b;
	if ((x != a) || (x = b)) // Ответ c)
	{
		std::cout << "x не равен a или x равен b\n";
	}
	else {
		std::cout << "x равен а или x равен b\n";
	}
}
