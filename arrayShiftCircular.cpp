#include <iostream>

using namespace std;

void arrayShiftCircular(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
        arr[i] = arr[(i - 1)];

    arr[0] = temp;
}

int main()
{

    int arr[5];
    int size = 5;
    int k = 3;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    while (k--)
        arrayShiftCircular(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}