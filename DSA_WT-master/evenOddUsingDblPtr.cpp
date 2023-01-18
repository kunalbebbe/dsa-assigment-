#include <iostream>

using namespace std;

void checkMod2(int **a, int n)
{
    for (int i = 0; i < n; i++)
        if (*(*a + i) % 2 == 0)
            cout << *(*a + i) << " is even\n";
        else
            cout << *(*a + i) << " is odd\n";
}

int main()
{
    int *b;
    int a[3];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    b = a;

    checkMod2(&b, 3);
}