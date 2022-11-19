#include <iostream>
using namespace std;

int Gcd(int num1, int num2)
{
    int gcd = 1;
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int Lcm(int a, int b)
{
    int lcm;
    if (a > b)

        lcm = a;

    else

        lcm = b;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }
        lcm++;
    }
    return lcm;
}

int main()
{
    int a, b;
    cout << "Input 2 numbers ";
    cin >> a >> b;

    cout << "GCD of the 2 numbers is " << Gcd(a, b) << endl;

    cout << "LCM of the 2 numbers is " << Lcm(a, b) << endl;
    return 0;
}
