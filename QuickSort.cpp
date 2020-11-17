#include <vector>
#include <string>

using namespace std;

// external link to numSteps found in Source.cpp
extern long long int numSteps;

void QuickSort(vector<int>& input, int left, int right) {
    int p = (left + right) / 2;
    int pivot = input[p];

    // Move elements smaller than the pivot to the left side
    int l = left;
    int r = right;

    // p, pivot, l, r assignments
    numSteps += 4;

    while (l <= r) {
        // check outer loop condition
        numSteps++;

        while (input[l] < pivot) {
            ++l;

            // check inner loop condition
            numSteps++;
        }
        while (input[r] > pivot) {
            --r;

            // check inner loop condition
            numSteps++;
        }
        if (l <= r) {
            int tmp = input[l];
            input[l] = input[r];
            input[r] = tmp;
            ++l;
            --r;

            // tmp, input[l], input[r], l, r assignments
            numSteps += 5;
        }

        // check if statement condition
        numSteps++;
    }

    if (left < r) {
        QuickSort(input, left, r);

        // function call
        numSteps++;
    }

    // check if statement condition
    numSteps++;

    if (l < right) {
        QuickSort(input, l, right);

        // function call
        numSteps++;
    }

    // check if statement condition
    numSteps++;

}