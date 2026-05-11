#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

const int SIZE = 100;

int makearray(int[]);
void printout(int[], int);
void swapfold(int[], int);
void sumfold(int[], int);
void equalfold(int[], int[], int);

void swapfold(int number[], int last)
{
    for (int i = 0; i < last / 2; i++) {
        int temp = number[i];
        number[i] = number[last - i - 1];
        number[last - i - 1] = temp;
    }
}

void sumfold(int number[], int last)
{
    for (int i = 0; i < (last + 1) / 2; i++) {
        number[i] = number[i] + number[last - i - 1];
    }
}

void equalfold(int number[], int equal[], int last)
{
    for (int i = 0; i < last / 2; i++) {
        equal[i] = (number[i] == number[last - i - 1]) ? 1 : 0;
    }
}

/***************************************************
 * Do not edit the following functions
 ***************************************************/
int makearray(int number[])
{
    int last;
    srand(time(NULL));
    do
    {
        last = rand() % 20;
    } while (last < 10);

    for (int i = 0; i < last; i++)
        number[i] = rand() % 10;
    return last;
}
void printout(int number[], int last)
{
    for (int i = 0; i < last; i++)
        cout << setw(5) << number[i];
    cout << endl;
}

#endif
