#include <iostream>

using namespace std;

int digitSum(int i)
{
    if (i == 0)
        return 0;
    else
        return i % 10 + digitSum(i / 10);
}

int main()
{
    int i = 678;
    cout << digitSum(i);
    return 0;
}