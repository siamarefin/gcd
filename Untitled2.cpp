#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int rem = a % b;
    while (rem != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    cout << "The GCD is : " << a << endl;
    return 0;
}