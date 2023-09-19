#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int N, res;
	cout << "Введите кол-во секунд N = ";
	cin >> N;
	res = N / 60;
	cout << "Кол-во полных минут, прошедших с начала суток = " << res;
}