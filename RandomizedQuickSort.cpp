#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// external link to numSteps found in Source.cpp
extern long long int numSteps;

int partition(vector<int>& arr, int low, int high)
{
    int random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
    
    numSteps += 2;

    int pivot = arr[high];
    int i = (low - 1);
    numSteps += 2;

    for (int j = low; j <= high - 1; j++)
    {
        numSteps += 2;
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            numSteps += 3;
        }
        numSteps++;
    }
    swap(arr[i + 1], arr[high]);
    numSteps += 3;
    return (i + 1);
}

void RandomizedQuickSort(vector<int>& arr, int low, int high)
{
    while (low < high) {
        numSteps++;

        int j = partition(arr, low, high);
        numSteps++;

        if (j - low < high - j) {
            numSteps += 3;
            RandomizedQuickSort(arr, low, j - 1);
            numSteps++;
            low = j + 1;
            numSteps++;
        }
        else {
            RandomizedQuickSort(arr, j + 1, high);
            numSteps++;
            high = j - 1;
            numSteps++;
        }
        numSteps++;
    }
    numSteps++;
}