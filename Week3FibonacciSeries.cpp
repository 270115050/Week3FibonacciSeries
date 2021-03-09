// Week3FibonacciSeries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int f1 = 0, f2 = 1, f3;
    int i = 0;
    int total =1;

    while (i < 10) {
        cout << total << ", ";
        total = total + 4;       
        i++;
    }

    return 0;
}