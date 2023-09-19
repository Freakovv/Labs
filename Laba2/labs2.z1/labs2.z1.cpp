#include <iostream>
#include <cmath>
#include <locale>
const float PI = 3.1415926535;
using namespace std;
float main() {
    setlocale(LC_ALL, "rus"); 
    float a, z1, z2; 
    cout << "Введите a = "; 
    cin >> a; 
    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a); 
    z2 = 2 * std::sqrt(2) * cos(a) * sin(PI / 4 + 2 * a); 
    cout << "Ответ z1 = " << z1 << endl; 
    cout << "Ответ z2 = " << z2; 
}