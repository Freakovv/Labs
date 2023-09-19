#include <iostream>
#include <locale>
#include <cmath>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Rus");
	std::cout << "Программа для вычислений штрафного времени\n";
	int team1 = 0, team2 = 0, temp1, temp2;
	label:
	std::cout << "Введите штрафное время первой команды в секундах: ";
	std::cin >> temp1;
	std::cout << "Введите штрафное время второй команды в секундах: ";
	std::cin >> temp2;
	std::cout << "\n";
	team1 += temp1;
	team2 += temp2;
	std::cout << "Штрафное время первой команды: " << team1 << " секунд\n";
	std::cout << "Штрафное время второй команды: " << team2 << " секунд\n";
	std::cout << "Игра закончена?\n1. Да, остановить программу\n2. Нет, продолжить\n";
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
	std::cout << "Штрафное время первой команды: " << team1 << "секунд\n";
	std::cout << "Штрафное время второй команды: " << team2 << "секунд\n";
	return 0;
}

