﻿#include <iostream>
#include <locale>
using namespace std;
const double z = 5, h = 2; // Объявление константы
int main() 
{
	setlocale(LC_ALL, "Russian"); // Функция для подключение русского языка
	double x, y, c; // Объявление переменных через тип данных с плавающей точкой
	cout << "Введите x = "; // Вывод текста
	cin >> x; // Ввод переменной x пользователем
	cout << "Введите y = ";  // Вывод текста
	cin >> y; // Ввод переменной y пользователем
	c = z * x * (y - h) + y / x; // Решение уравнения по формуле
	cout << "Ответ = " << c; // Вывод ответа
}