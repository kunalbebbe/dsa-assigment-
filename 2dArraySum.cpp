#include <iostream>

using namespace std;

void twoDArraySum(int **a, int rows, int columns)
{
    int sum = 0;
    for (int row = 0; row < rows; row++)
        for (int col = 0; col < columns; col++)
            sum += *((*a + row) + col);

    cout << sum;
}
int main()
{

    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int **b;
    *b = a[0];
    twoDArraySum(b, 3, 4);
}