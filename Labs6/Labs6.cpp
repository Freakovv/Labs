#include <iostream>
#include <Windows.h>
void z1() {
    const int SIZE = 12;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "������� " << i << " ������� �������: ";
        std::cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }
    printf("������� ������� -->\t");
    std::cout << "Min: " << min << "\t";
    std::cout << "Max: " << max << "\n";
}
void z2_1() {
    const int size = 14;
    float arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "������� " << i << " ������� �������: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("��� ������ -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " �������: " << arr[i] << "\n";
    }
    printf("��� ����������� ������� ����� �������...\n");
    system("pause");
    system("cls");
    printf("������ ������� �������� �� 12.9 -->\n");
    for (int i = 0; i < size; i++)
    {
        arr[i] += 12.9;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " ������� ������ �������: " << arr[i] << "\n";
    }
}
void z2_2() {
    const int size = 10;
    double arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "������� " << i << " ������� �������: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("��� ������ -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    printf("�������� ��������� ���� ��� ������ ������ -->\t");

    for (int i = 0; i < size; i++)
    {
        if ((arr[i] / 2 == 1) || (arr[i] < 40))
            std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void z2_3() {
    const int size = 10;
    double arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "������� " << i << " ������� �������: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("��� ������ � ������� -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << "massiv[" << i << "] = " << arr[i] << std::endl;
    }
    printf("��� ����������� ������� ����� �������...\n");
    system("pause");
    system("cls");
    printf("�������� ������ ���� ��� ������ ���� -->\t");
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] > 7) || (arr[i] < 3))
            std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void z2_5() {
    const int size = 10;
    int a = 1;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "������� " << i << " ������� �������: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("��� ������ � ������� -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << "vector[" << i << "] = " << arr[i] << std::endl;
    }
    printf("����� ������� ���� -->\t");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 3 == 0) {
            a *= arr[i];
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\n������������ ���� �����: " << a;
}
void exit() {
    std::abort;
}
int main() {
    label:
    setlocale(LC_ALL, "Rus");
    int switcher;
    printf("�������� �������:\n1. ������� 1\n2. ������� 2\n3. ����� �� ���������\n");
    std::cin >> switcher;
    switch (switcher)
    {
    case 1:
        printf("�� ������� ������� 1:\n");
        z1();
        std::cout << "\n";
        Sleep(1000);
        goto label;
        break;
    case 2:
        goto zad2;
    case 3:
        goto wtf;
        break;
    default:
        printf("�������� �����, ���������� ��� ���!\n\n");
        Sleep(1000);
        goto label;
        break;
    }
zad2:
    system("cls");
    int sw;
    printf("1. ������� 1\n2. ������� 2\n3. ������� 3\n4. ������� 4\n5. ������� 5\n6. �����\n7. ����� �� ���������\n�����: ");
    std::cin >> sw;
    switch (sw)
    {
    case 1:
        printf("�� ������� ������� 1:\n");
        z2_1();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;
    case 2:
        printf("�� ������� ������� 2:\n");
        z2_2();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;
    case 3:
        printf("�� ������� ������� 3:\n");
        z2_3();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;    
    case 5:
        printf("�� ������� ������� 5:\n");
        z2_5();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;
    case 6:
        system("cls");
        goto label;
    case 7:
        system("cls");
        exit();
        break;
    default:
        printf("�������� �����, ���������� ��� ���!\n\n");
        Sleep(1000);
        goto zad2;
        break;
    }
wtf:
    printf("�����?\n1. ��\n2.���\n");
    int y;
    std::cin >> y;
    switch (y)
    {
    case 1:
        system("cls");
        exit();
        break;
    case 2:
        system("cls");
        goto label;
    default:
        break;
    }
}