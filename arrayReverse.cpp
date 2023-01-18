#include <iostream>

using namespace std;

void arrayReverse(int arr[], int size)
{
    // Using Pointers
    int *ptr = arr;
    for (int i = 0; i < size / 2; i++)
    {
        int temp = *(ptr + i);
        *(ptr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }

    // No pointers
    //  for (int i = 0; i < size / 2; i++)
    //  {
    //      int temp = arr[i];
    //      arr[i] = arr[size - 1 - i];
    //      arr[size - 1 - i] = temp;
    //  }
}

int main()
{
    int size = 5;
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    arrayReverse(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}