#include <iostream>

using namespace std;

void segregateNegatives(int a[], int n)
{
    // O(N)

    // for (int i = 0, lptr = 0; i < 6; i++)
    // {
    //     if (a[i] < 0)
    //     {
    //         int tmp = a[i];
    //         a[i] = a[lptr];
    //         a[lptr] = tmp;
    //         lptr++;
    //     }
    // }

    // O(N/2)

    for (int lIdx = 0, rIdx = n - 1; lIdx < rIdx;)
    {
        if (a[lIdx] < 0)
        {
            int tmp = a[lIdx];
            a[lIdx] = a[rIdx];
            a[rIdx] = tmp;
            rIdx--;
        }

        if (a[rIdx] >= 0)
        {
            int tmp = a[lIdx];
            a[lIdx] = a[rIdx];
            a[rIdx] = tmp;
            lIdx++;
        }
    }
}

int main()
{

    int a[] = {-4, -5, 3, -1, 8, -10};
    int n = 6;
    segregateNegatives(a, n);
    // segregateNegatives(a);

    // for (int lptr = 0, rptr = n - 1; lptr < rptr;)

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}