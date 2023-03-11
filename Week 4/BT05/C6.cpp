#include <iostream>
#include <cmath>

using namespace std;

int ucln (int a, int b)
{
    a = abs (a);
    b = abs (b);
    while (a*b != 0)
    {
        if (a > b) a = a % b;
        else b = b % a;
    }
    return a+b;
}

int main ()
{
    cout << "Nhap 2 so can tim UCLN: ";
    int m,n;  cin >> m >> n;

    if (ucln (m, n) == 1)
        cout << m << " va " << n << " la 2 so nguyen to cung nhau.";
    else cout << m << " va " << n << " khong la 2 so nguyen to cung nhau.";

    return 0;;
}
