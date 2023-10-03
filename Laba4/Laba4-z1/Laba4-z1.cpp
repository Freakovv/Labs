#include <cmath>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите числа c,k = ";
	float c,k,t2;
	cin >> c >> k;
	if (abs(c+k) > 2) {
		t2 = pow(tan(c - 2 * k),2);
	}
	else if (0.5 < abs(c + k) <= 2) {
		t2 = (log(abs(c - 2 * k))) - sin(c / (2 * k));
	}
	else {
		cerr << "Произошла ошибка";
	}
	std::cout << "t2 = " << t2;
}