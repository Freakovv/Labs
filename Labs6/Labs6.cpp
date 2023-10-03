#include <iostream>
#include <Windows.h>
#include <ctime>
void z1() {
    const int SIZE = 12;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Введите " << i << " элемент массива: ";
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
    printf("Границы массива -->\t");
    std::cout << "Min: " << min << "\t";
    std::cout << "Max: " << max << "\n";
}
void z2_1() {
    const int size = 14;
    float arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите " << i << " элемент массива: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("Ваш массив -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " элемент: " << arr[i] << "\n";
    }
    printf("Для продолжения нажмите любую клавишу...\n");
    system("pause");
    system("cls");
    printf("Каждый элемент увеличен на 12.9 -->\n");
    for (int i = 0; i < size; i++)
    {
        arr[i] += 12.9;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " элемент нового массива: " << arr[i] << "\n";
    }
}
void z2_2() {
    const int size = 10;
    double arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите " << i << " элемент массива: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("Ваш массив -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    printf("Элементы некратные двум или меньше сорока -->\t");

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
        std::cout << "Введите " << i << " элемент массива: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("Ваш массив в столбик -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << "massiv[" << i << "] = " << arr[i] << std::endl;
    }
    printf("Для продолжения нажмите любую клавишу...\n");
    system("pause");
    system("cls");
    printf("Элементы больше семи или меньше трем -->\t");
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] > 7) || (arr[i] < 3))
            std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void z2_4(){
    const int size = 1208;
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
    arr[i] = rand() % 13 - 9;
    }
    printf("Числа: ");
    for (int i = 0; i < size; i++)
    {
    std::cout << arr[i] << " ";
    }
    printf("\n\nЭлементы массива с индексами, некратными двум и большими 774 - х");
    for (int i = 0; i < size; i++) {
        if (i % 2 != 0 && arr[i] > 774) {
            std::cout << arr[i] << ' ';
        }
    }
    printf("\n");
}
void z2_5() {
    const int size = 10;
    int a = 1;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите " << i << " элемент массива: ";
        std::cin >> arr[i];
    }
    system("cls");
    printf("Ваш массив в столбик -->\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << "vector[" << i << "] = " << arr[i] << std::endl;
    }
    printf("Числа кратные трем -->\t");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 3 == 0) {
            a *= arr[i];
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\nПроизведение этих чисел: " << a;
}
void exit() {
    std::abort;
}
int main() {
    label:
    setlocale(LC_ALL, "Rus");
    int switcher;
    printf("Выберите задание:\n1. Задание 1\n2. Задание 2\n3. Выйти из программы\n");
    std::cin >> switcher;
    switch (switcher)
    {
    case 1:
        printf("Вы выбрали задание 1:\n");
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
        printf("Неверный выбор, попробуйте еще раз!\n\n");
        Sleep(1000);
        goto label;
        break;
    }
zad2:
    system("cls");
    int sw;
    printf("1. Задание 1\n2. Задание 2\n3. Задание 3\n4. Задание 4\n5. Задание 5\n6. Назад\n7. Выйти из программы\nВыбор: ");
    std::cin >> sw;
    switch (sw)
    {
    case 1:
        printf("Вы выбрали задание 1:\n");
        z2_1();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;
    case 2:
        printf("Вы выбрали задание 2:\n");
        z2_2();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;
    case 3:
        printf("Вы выбрали задание 3:\n");
        z2_3();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;     
    case 4:
        printf("Вы выбрали задание 4:\n");
        z2_4();
        Sleep(1000);
        std::cout << "\n";
        goto label;
        break;    
    case 5:
        printf("Вы выбрали задание 5:\n");
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
        printf("Неверный выбор, попробуйте еще раз!\n\n");
        Sleep(1000);
        goto zad2;
        break;
    }
wtf:
    printf("Вы уверены?\n1. Да\n2.Нет\n");
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