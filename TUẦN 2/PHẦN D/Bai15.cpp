#include <iostream>

using namespace std;

void Fibonacci (int n)
{
    int x0 = 0, x1 = 1, xn = x0+x1;
    int a[100] = {0};
    int i = 0;
    while (xn <= n)
    {
        a[i] = xn;
        i++;
        xn = x0 + x1;
        x0 = x1;
        x1 = xn;
    }
    if (a[i-1] == n) cout << "Thuoc day Fibonacci" << endl;
    else cout << "Khong thuoc day Fibonacci" << endl;
    for (int j = 0; j < i; j++) cout << a[j] << ' ';
}

int main ()
{
    int n; cin >> n;
    Fibonacci(n);
    return 0;
}

