#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mylib.h"

using namespace std;

namespace MyLib {

    void initArray(float *arr, int size)
    {
        srand(static_cast<unsigned int>(time(0)));
        for (size_t i = 0; i < size; i++)
            arr[i] = (rand()%10000)/100.0f - 50;        // для наглядности вывода данных ограничил число знаков до сотых
    }

    void printArray(float *arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void analyzeArray(float *arr, int size, int *aCount, int *bCount)
    {
        for (size_t i = 0; i < size; i++)
        {
            if (arr[i] > 0)
                *aCount += 1;
            else if (arr[i] < 0)
                *bCount += 1;
        }
    }
}
