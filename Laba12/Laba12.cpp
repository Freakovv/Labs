#include <iostream>
#include "HeaderSimanovich.h"

int main() {
    //1
    setlocale(LC_ALL, "ru");
    float rows = 0;
    float cols = 0;
    func::fillRowsAndCols(rows, cols);
    float** array = new float* [rows];
    memory::createMemory(array, rows , cols);
    functions::fillArray(array, rows, cols);
    functions::printArray(array, rows, cols);
    //2
    float diagonalSum = 0;
    float k = 0;
    func::UpdateValue(k);
    functions::diagonalSumLessThanValue(array, diagonalSum, rows, cols, k);
    std::cout << "Сумма диагонали: " << diagonalSum << std::endl << std::endl;
    //3
    float product = 1;
    func::UpdateValue(k);
    functions::ProductNotIncInDiagonal(array,product, rows, cols, k);
    std::cout << "Произведение элементов не включенных в диагональ и больших k: "
        << product << std::endl << std::endl;
    //4
    functions::z4(array, rows, cols);
    //5
    float countOfEl = functions::CountOfElements(array, rows, cols);
    std::cout << "Количество элементов, значение куба каждого из которых больше avg: " 
        << countOfEl << std::endl;
    memory::deleteMemory(array, rows);
}