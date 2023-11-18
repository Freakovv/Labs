#include <iostream>
#include <string.h>

void removeExtraSpaces(char* str) {
    setlocale(LC_ALL, "Rus");
    int n = strlen(str);
    int j = 0;

    // �������� ������ �������� ����� �������������� ������� ����� ����������
    for (int i = 0; i < n; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            while (str[i + 1] == ' ') {
                i++;
            }
        }
        str[j++] = str[i];
    }
    str[j] = '\0';

    // �������� ������ �������� � ����� ������ ����� ��������� �����
    for (int i = j - 1; i >= 0; i--) {
        if (str[i] == '.') {
            j = i + 1;
            break;
        }
        else if (str[i] == ' ') {
            continue;
        }
        else {
            break;
        }
    }
    str[j] = '\0';

    // �������� ������ ��������, ���� �� ������ ���� ����� ����
    j = 0;
    for (int i = 0; i < n; i++) {
        while (str[i] == ' ' && str[i + 1] == ' ' && str[i + 2] == ' ') {
            i++;
        }
        str[j++] = str[i];
    }
    str[j] = '\0';
}

int main() {
    char str[] = "������,       ���      �������� ������ .    ";
    removeExtraSpaces(str);
    std::cout << str;
    return 0;
}