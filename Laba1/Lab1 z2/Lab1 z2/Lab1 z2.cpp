#include <iostream>
#include <locale>
using namespace std;
const double a = 8, b = 1; // Объявление константы
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, c, h; // Объявление переменных через тип данных с плавающей точкой
    cout << "Введите x = "; // Вывод текста
    cin >> x; // Ввод пременной x
    cout << "Введите c = "; // Вывод текста
    cin >> c; // Ввод пременной c
    h = pow(x, 2) - a * x + b - c; // Формула уравнения
    cout << "Ответ уравнения = " << h; // Вывод ответа уравнения
}
