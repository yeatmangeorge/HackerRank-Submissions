#include<iostream>
#include <string>
#include <vector>

void calculateAndPrintRatio(int numOfGivenCriteria, int sizeOfArray)
{
    float ratio = (float)numOfGivenCriteria / (float)sizeOfArray;

    std::cout << std::to_string(ratio) << "\n";
}

void plusMinus(std::vector<int> arr) {
    int numOfNegative, numOfPositive, numOfZero;
    numOfNegative = numOfPositive = numOfZero = 0;

    for (int i : arr)
    {
        if (i > 0) { numOfPositive++; }
        if (i < 0) { numOfNegative++; }
        if (i == 0) { numOfZero++; }
    }

    calculateAndPrintRatio(numOfPositive, arr.size());
    calculateAndPrintRatio(numOfNegative, arr.size());
    calculateAndPrintRatio(numOfZero, arr.size());
}

/*
int main()
{
    std::vector<int> arr{3,23,2,-2,-32,2,0};

    plusMinus(arr);
}
*/