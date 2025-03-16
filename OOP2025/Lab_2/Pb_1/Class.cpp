#include "Class.h"
#include <stdio.h>
#include <iostream>
using namespace std;

void NumberList::Init()
{
    this->count = 0;
}

bool NumberList::Add(int x)
{
    this->numbers[count] = x;
    this->count++;
    if (this->count >= 10) return false;
}

void NumberList::Sort()
{
    int i, j;
    for (i = 0; i < this->count-1; i++)
        for (j = i + 1; j < this->count; j++)
        {
            if (this->numbers[i] > this->numbers[j])
            {
                int temp = this->numbers[i];
                this->numbers[i] = this->numbers[j];
                this->numbers[j] = temp;
            }
        }
}

void NumberList::Print()
{
    int i;
    for (i = 0; i < this->count; i++)
    {
        cout << this->numbers[i] << " ";
    }
}
