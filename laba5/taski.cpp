#include <iostream>
#include <locale>
#include <cmath>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Rus");
	std::cout << "��������� ��� ���������� ��������� �������\n";
	int team1 = 0, team2 = 0, temp1, temp2;
	label:
	std::cout << "������� �������� ����� ������ ������� � ��������: ";
	std::cin >> temp1;
	std::cout << "������� �������� ����� ������ ������� � ��������: ";
	std::cin >> temp2;
	std::cout << "\n";
	team1 += temp1;
	team2 += temp2;
	std::cout << "�������� ����� ������ �������: " << team1 << " ������\n";
	std::cout << "�������� ����� ������ �������: " << team2 << " ������\n";
	std::cout << "���� ���������?\n1. ��, ���������� ���������\n2. ���, ����������\n";
	int p;
	std::cin >> p;
	switch (p)
	{
	case 1: 
		goto end;
		break;
	case 2:
		goto label;
	default:
		break;
	}
	end:
	std::cout << "�������� ����� ������ �������: " << team1 << "������\n";
	std::cout << "�������� ����� ������ �������: " << team2 << "������\n";
	return 0;
}

