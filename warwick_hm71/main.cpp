#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mylib.h"

int main()
{
    const int mySize = 7;
    float myArr[mySize] = { };
    int aCount = 0, bCount = 0;
    MyLib::initArray(myArr, mySize);
    MyLib::analyzeArray(myArr, mySize, &aCount, &bCount);
    MyLib::printArray(myArr, mySize);
    
    std::cout << "В вашем массиве " << aCount << " положительных чисел" << std::endl;
    std::cout << "В вашем массиве " << bCount << " отрицательных чисел" << std::endl;
    return 0;
}
