#include <iostream>

using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;
    int a1 = abs (a);
    int b1 = abs (b);
    while (a1 * b1 != 0)
    {
        if (a1 > b1) a1 = a1 % b1;
        else b1 = b1 % a1;
    }
    int ucln = a1+b1;
    cout << a/ucln << '/' << b/ucln;
    return 0;
}
