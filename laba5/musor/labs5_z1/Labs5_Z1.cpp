#include <iostream>
#include <cmath>
int main() {
    int n = 100;
    double a = 0.1, b = 1, h = (b - a) / n;
    for (int i = 0; i <= n; ++i) {
        double x = a + i * h, Y = exp(2 * x), S = 1 + 2 * x / 1;
        for (int j = 2; j <= n; ++j) {
            double fact = 1;
            for (int k = 1; k <= j; ++k) {
                fact *= k;
            }
            S += pow(2 * x, j) / fact;
        }
        std::cout << "x = " << x;
        std::cout << "\tY(x) = " << Y;
        std::cout << "\tS(x) = " << S << "\n";
    }
}