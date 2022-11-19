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

    int a, b;
    cout << "Enter a ";
    cin >> a;
    cout << "Enter b ";
    cin >> b;
    Swap(a, b);

    cout << "after swap a = " << a << " "
         << "after swap b = " << b;

    return 0;
}
