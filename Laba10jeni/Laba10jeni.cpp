#include <iostream>
void z1() {
    //������� ��������� �� ����������
    double a = 1.1;
    double& c= a;
    double* ptrA = &a;
    double b = 2.1;
    double* ptrB = &b;
    std::cout << "a = " << a << " b = " << b << "\n";
    //����������� a � 3 ����
    *ptrA *= 3;
    //����� � � b �������
    double temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    std::cout << "a = " << a << " b = " << b << "\n";
}
void z2() {
    char* ptr1 = new char;
    char* ptr2 = new char;
    char* ptr3 = new char;
    std::cout << "������� ���������� �������� ��� ������� ���������: ";
    std::cin >> *ptr1;
    std::cout << "������� ���������� �������� ��� ������� ���������: ";
    std::cin >> *ptr2;
    std::cout << "������� ���������� �������� ��� �������� ���������: ";
    std::cin >> *ptr3;

    std::cout << "�������� ������� ���������: " << *ptr1 << std::endl;
    std::cout << "�������� ������ ���������: " << *ptr2 << std::endl;
    std::cout << "�������� �������� ���������: " << *ptr3 << std::endl;

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

