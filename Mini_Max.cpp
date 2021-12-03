#include <iostream>
#include <vector>
#include <string>



void insertionSort(std::vector<int>& vector)
{
    const int sizeOfVector = vector.size();

    int currentVectorIndex, previousVectorIndex;
    for (int i = 1; i < sizeOfVector; i++)
    {
        currentVectorIndex = vector[i];
        previousVectorIndex = i - 1;
        while (previousVectorIndex >= 0 && vector[previousVectorIndex] > currentVectorIndex)
        {
            vector[previousVectorIndex + 1] = vector[previousVectorIndex];
            previousVectorIndex--;
        }
        vector[previousVectorIndex + 1] = currentVectorIndex;
    }
}

void miniMaxSum(std::vector<int> arr) {

    long long minSum, maxSum;
    minSum = maxSum = 0;

    insertionSort(arr);

    for (int i = 0; i < arr.size() - 1; i++)
    {
        minSum += arr[i];
    }

    for (int i = arr.size() - 1; i > 0; i--)
    {
        maxSum += arr[i];
    }

    std::cout << std::to_string(minSum) << " " << std::to_string(maxSum);
        

    /*
    for (int i : arr)
    {
        std::cout << std::to_string(i) << "\n";
    }
    */
    
    
}

/*
void main()
{
    std::cout << "Mini-Max\n";

    std::vector<int> a{ 23,1,2,35,6,2 };
    miniMaxSum(a);
}
*/