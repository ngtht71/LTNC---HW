#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;
    a = abs (a);
    b = abs (b);
    while (a * b != 0)
    {
        if (a > b) a = a % b;
        else b = b % a;
    }
    cout << a+b;
    return 0;
}

