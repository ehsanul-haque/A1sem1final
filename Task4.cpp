#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()

{
    int a = 5, b = 10;
    Swap(a, b);

    return 0;
}