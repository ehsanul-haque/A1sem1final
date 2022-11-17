#include <iostream>
using namespace std;

int fact(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}

int main()
{
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is " << fact(num) << endl;

    int n, r;
    cin >> n, r;
    cout << combination(n, r);
    cout << permutation(n, r);

    return 0;
}
