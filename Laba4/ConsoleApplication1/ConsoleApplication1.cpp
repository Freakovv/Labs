#include <iostream>
#include <locale>
#include <algorithm>
using namespace std;
void z1() {
    double x, f, j, m;
    int p;
    std::cout << "������� x = ";
    std::cin >> x;
    std::cout << "������� m = ";
    std::cin >> m;
    std::cout << "�������� �������\n1.e^x\n2.x^2\n";
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
        std::cout << "������ �������� ����";
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
    std::cout << "�������� �������: \n1.������� 1 \n2.������� 2 \n3.������� 3 \n �����: ";
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
        cout << "������� ���� ����� ����� ������: ";

        for (int i = 0; i < 5; i++) {
            cin >> a;
            if (a > -50 && a < 0) {

                cout << "����� " << a << " ��������� � ������ A" << endl;

            }
            else if (a >= 100 || a == 0) {

                cout << "����� " << a << " ��������� � ������ B" << endl;

            }
            else if (a % 8 == 0) {

                cout << "����� " << a << " ��������� � ������ C" << endl;

            }
            else {

                cout << "����� " << a << " ��������� � ������ D" << endl;

            }

        }
        return 0;
    }
    case 3: {
        setlocale(LC_ALL, "rus");
        int mass, i;
        std::cout << "������� �����: ";
        std::cin >> mass;
        if (mass >= 1)
        {
            std::cout << "����� �� ����� 1*10e24 ����� ��������� �������: " << std::endl;
            i = 1;
        }
        if (mass >= 5) { std::cout << "����� �� ����� 5*10e24 ����� ��������� �������:\n "; i = 2; }
        else if (mass >= 6) { std::cout << "����� �� ����� 6*10e24 ����� ��������� �������:\n "; i = 3; }
        else if (mass >= 87) { std::cout << "����� �� ����� 87*10e24 ����� ��������� �������:\n "; i = 4; }
        else if (mass >= 103) { std::cout << "����� �� ����� 103*10e24 ����� ��������� �������:\n "; i = 5; }
        else if (mass >= 570) { std::cout << "����� �� ����� 570*10e24 ����� ��������� �������:\n "; i = 6; }
        else if (mass >= 1907) { std::cout << "����� �� ����� 1907*10e24 ����� ��������� �������\n "; i = 7; }
        switch (i)
        {
        case 1: { std::cout << "������ = 1907\n������ = 570\n������ = 103\n���� = 87\n����� = 6\n������ = 5\n���� = 1"; break; }
        case 2: { std::cout << "������ = 1907\n������ = 570\n������ = 103\n���� = 87\n����� = 6\n������ = 5"; break; }
        case 3: {std::cout << "������ = 1907\n������ = 570\n������ = 103\n���� = 87\n����� = 6"; break; }
        case 4: {std::cout << "������ = 1907\n������ = 570\n������ = 103\n���� = 87"; break; }
        case 5: {std::cout << "������ = 1907\n������ = 570\n������ = 103"; break; }
        case 6: {std::cout << "������ = 1907\n������ = 570"; break; }
        case 7: {std::cout << "������ = 1907"; break; }
        default:
            std::cout << "������ �������� ����";
            break;
        }
        break;
    }
    default:
        std::cout << "������";
        break;
    }

}