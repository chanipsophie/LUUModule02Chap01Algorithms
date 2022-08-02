// LUUModule02Chap01Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <stdlib.h>

#define ARRAY_SIZE 20

using namespace std;

void FillArray(int ArrayToFill[], int SizeOfArray);
void BubbleSort(int ArrayToSort[], int SizeOfArray);

int main()
{
	int Dataset[ARRAY_SIZE];

    srand(time(nullptr));
    FillArray(Dataset, ARRAY_SIZE);

    BubbleSort(Dataset, ARRAY_SIZE);
    {
        for (int i = 0; i < ARRAY_SIZE; i++)
            cout << Dataset[i] << endl;
    }
}


void FillArray(int ArrayToFill[], int SizeOfArray)
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        ArrayToFill[i] = rand() % ARRAY_SIZE + 1;
    }
}


int ChooseASearchKey(int ArrayToPickFrom[], int SizeOfArray)
{
    int RandomIndex = rand() % ARRAY_SIZE + 1;
    return ArrayToPickFrom[RandomIndex];
}

void BubbleSort(int ArrayToSort[], int SizeOfArray)
{
    for (int pass = 0; pass < SizeOfArray; ++pass)
    {
        for (int i = 0; i < SizeOfArray - 1; ++i)
        {
            if (ArrayToSort[i] > ArrayToSort[i + 1])
            {
                int temp = ArrayToSort[i];

                ArrayToSort[i] = ArrayToSort[i + 1];

                ArrayToSort[i + 1] = temp;
            }
        }
    }
}