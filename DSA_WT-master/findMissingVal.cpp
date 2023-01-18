#include <iostream>

using namespace std;

void findMissingVal(int arr[], int size)
{

    int d1 = arr[1] - arr[0];
    int d2 = arr[size - 1] - arr[size - 2];

    if (d1 == d2)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] + d1 != arr[i + 1])
            {
                cout << "Missing Value: " << arr[i] + d1;
                break;
            }
        }
    }
    else
    {
        int d3 = arr[2] - arr[1];
        if (d3 == d1)
        {
            cout << "Missing Value: " << arr[size - 1] - d3;
            return;
        }
        else
        {
            cout << "Missing Value: " << arr[0] + d3;
            return;
        }
    }
}

int main()
{
    int size = 5;
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 6;

    findMissingVal(arr, size);

    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << " ";
}