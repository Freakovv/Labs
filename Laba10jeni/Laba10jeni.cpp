#include <iostream>
void z1() {
    //Создаем указатели на переменные
    double a = 1.1;
    double& c= a;
    double* ptrA = &a;
    double b = 2.1;
    double* ptrB = &b;
    std::cout << "a = " << a << " b = " << b << "\n";
    //Увеличиваем a в 3 раза
    *ptrA *= 3;
    //Мянем а и b местами
    double temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    std::cout << "a = " << a << " b = " << b << "\n";
}
void z2() {
    char* ptr1 = new char;
    char* ptr2 = new char;
    char* ptr3 = new char;
    std::cout << "Введите символьное значение для первого указателя: ";
    std::cin >> *ptr1;
    std::cout << "Введите символьное значение для второго указателя: ";
    std::cin >> *ptr2;
    std::cout << "Введите символьное значение для третьего указателя: ";
    std::cin >> *ptr3;

    std::cout << "Значение первого указателя: " << *ptr1 << std::endl;
    std::cout << "Значение вторго указателя: " << *ptr2 << std::endl;
    std::cout << "Значение третьего указателя: " << *ptr3 << std::endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    printf("zadanie 1 -->\n");
    z1();
    printf("\nzadanit 2 -->\n");
    z2();
}

