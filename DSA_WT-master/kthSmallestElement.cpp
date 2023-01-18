#include <iostream>

using namespace std;

void kthSmallest(int a[], int k)
{
    for (int i = 0; i < 10; i++)
        for (int j = i; j < 10; j++)
            if (a[j] < a[i])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }

    cout << a[k - 1];
}

int main()
{

    int a[10] = {6, 9, 4, 2, 0, 12, 11, 3, 7, 8};
    int k = 3;
    kthSmallest(a, k);
    return 0;
}