// find number of elements that occur after and are greater than current element in array
#include <iostream>

using namespace std;

void findGreaterNum(int arr[], int size)
{
    int score[size];
    for (int i = 0; i < size; i++)
        score[i] = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] > arr[i])
                score[i]++;
        }
    }

    for (int i = 0; i < size; i++)
        cout << score[i] << " ";
}

int main()
{
    int arr[5];
    int size = 5;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    findGreaterNum(arr, size);
}