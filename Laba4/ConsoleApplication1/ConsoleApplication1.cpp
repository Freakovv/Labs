#include <iostream>
#include <locale>
#include <algorithm>
using namespace std;
void z1() {
    double x, f, j, m;
    int p;
    std::cout << "Введите x = ";
    std::cin >> x;
    std::cout << "Введите m = ";
    std::cin >> m;
    std::cout << "Выберите функцию\n1.e^x\n2.x^2\n";
    std::cin >> p;
    switch (p)
    {
    case 1:
    {
        f = exp(x);
        break;
    }
    case 2: {
        f = pow(x, 2);
        break;
    }
    default:
        std::cout << "Такого варианта нету";
        break;
    }
    std::cout << "f(x) = " << f << std::endl;
    if (m > -1 && m < x) {
        j = sin(5 * f + 3 * m * abs(f));
    }
    else if (m > x) {
        j = cos(3 * f + 5 * m * abs(f));
    }
    else if (x = m) {
        j = pow((f + m), 2);
    }
    std::cout << "x = " << x << endl;
    std::cout << "m = " << m << endl;
    std::cout << "f(x) = " << f << endl;
    std::cout << "j = " << j;
}
int main() {
    setlocale(LC_ALL, "rus");
    double x, f, j, m;
    int p;
    int zadanie;
    std::cout << "Выберите задание: \n1.задание 1 \n2.задание 2 \n3.задание 3 \n Выбор: ";
    std::cin >> zadanie;
    switch (zadanie)
    {
    case 1: {
        z1();
        break;
    }
    case 2: {
        setlocale(LC_ALL, "rus");
        int a;
        cout << "Введите пять чисел через пробел: ";

        for (int i = 0; i < 5; i++) {
            cin >> a;
            if (a > -50 && a < 0) {

                cout << "Число " << a << " относится к группе A" << endl;

            }
            else if (a >= 100 || a == 0) {

                cout << "Число " << a << " относится к группе B" << endl;

            }
            else if (a % 8 == 0) {

                cout << "Число " << a << " относится к группе C" << endl;

            }
            else {

                cout << "Число " << a << " относится к группе D" << endl;

            }

        }
        return 0;
    }
    case 3: {
        setlocale(LC_ALL, "rus");
        int mass, i;
        std::cout << "Введите массу: ";
        std::cin >> mass;
        if (mass >= 1)
        {
            std::cout << "Массу не менее 1*10e24 имеют следующие планеты: " << std::endl;
            i = 1;
        }
        if (mass >= 5) { std::cout << "Массу не менее 5*10e24 имеют следующие планеты:\n "; i = 2; }
        else if (mass >= 6) { std::cout << "Массу не менее 6*10e24 имеют следующие планеты:\n "; i = 3; }
        else if (mass >= 87) { std::cout << "Массу не менее 87*10e24 имеют следующие планеты:\n "; i = 4; }
        else if (mass >= 103) { std::cout << "Массу не менее 103*10e24 имеют следующие планеты:\n "; i = 5; }
        else if (mass >= 570) { std::cout << "Массу не менее 570*10e24 имеют следующие планеты:\n "; i = 6; }
        else if (mass >= 1907) { std::cout << "Массу не менее 1907*10e24 имеют следующие планеты\n "; i = 7; }
        switch (i)
        {
        case 1: { std::cout << "Юпитер = 1907\nСатурн = 570\nНептун = 103\nУран = 87\nЗемля = 6\nВенера = 5\nМарс = 1"; break; }
        case 2: { std::cout << "Юпитер = 1907\nСатурн = 570\nНептун = 103\nУран = 87\nЗемля = 6\nВенера = 5"; break; }
        case 3: {std::cout << "Юпитер = 1907\nСатурн = 570\nНептун = 103\nУран = 87\nЗемля = 6"; break; }
        case 4: {std::cout << "Юпитер = 1907\nСатурн = 570\nНептун = 103\nУран = 87"; break; }
        case 5: {std::cout << "Юпитер = 1907\nСатурн = 570\nНептун = 103"; break; }
        case 6: {std::cout << "Юпитер = 1907\nСатурн = 570"; break; }
        case 7: {std::cout << "Юпитер = 1907"; break; }
        default:
            std::cout << "Такого варианта нету";
            break;
        }
        break;
    }
    default:
        std::cout << "Ошибка";
        break;
    }

}