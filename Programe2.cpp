#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main()
{

    int a = 5, b = 10;

    cout << "Values before swapping are: " << a << " & " << b << endl;

    swap(a, b);

    cout << "Swapped Values are: " << a << " & " << b;

    return 0;
}
