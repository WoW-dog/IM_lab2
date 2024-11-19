#include <iostream>
#include "RandomLab2.h"

int main(){
    
    long X0 = 75282031; // Начальное значение
    long m = 10; // Модуль
    long a = 2; // Множитель
    long c = 3; // Приращение

    m = pow(2.0, 32.0);
    a = 1664525;
    c = 1013904223;

    int countNums1 = 200;
    int countNums2 = 50;

    unsigned long* randomNums = new unsigned long[countNums1];
    int* libRandomNums = new int[countNums1];
    unsigned long* SWBGNums = new unsigned long[countNums2];

    linearCongruentialMethod(X0, m, a, c, randomNums, countNums1);

    for (int i = 0; i < countNums1; i++) {
        std::cout << randomNums[i] << " ";
    }
    std::cout << "\n\n";
    for (int i = 0; i < countNums1; i++) {
        libRandomNums[i] = rand();
        std::cout << libRandomNums[i] << " ";

    }
    int lagA = 20;
    int lagB = 5;

    subtractWithBorrowGenerators(lagA, lagB, randomNums, SWBGNums, countNums2);

    std::cout << "\n\n";
    for (int i = 0; i < countNums2; i++) {
        std::cout << SWBGNums[i] << " ";
    }
}