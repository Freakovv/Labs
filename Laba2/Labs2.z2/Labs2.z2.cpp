#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
const double e = 2.71828182845904523536, x = -4.5, y = 0.75 * pow(10, -4), z = 0.845 * pow(10, 2);
int main() {
	setlocale(LC_ALL, "rus");
	double u, temp1, temp2, temp3;
	temp1 = cbrt(8 + pow(abs(x - y), 2) + 1);
	temp2 = pow(x, 2) + pow(y, 2) + 2;
	temp3 = pow(e, abs(x - y)) * pow((pow(tan(z), 2) + 1), x);
	u = temp1 / temp2 - temp3;
	cout << u;
}