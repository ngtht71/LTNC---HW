#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool isPrime (int n)
{
    int k = sqrt (n);
    if (n < 2) return false;
    for (int i = 2; i <= k; i++)
        if (n % i == 0) return false;
    return true;
}

bool perfectNumber (int n) // so co tong cac uoc tru chinh no bang chinh no
{
    int tmp = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) tmp += i;
    if (tmp == n) return true;
    return false;
}

bool squareNumber (int n) // so chinh phuong
{
    int k = sqrt (n);
    if (k*k == n) return true;
    return false;
}

int main ()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (isPrime(i) == 1 || perfectNumber(i) == 1 || squareNumber(i) == 1)
cout << i << ' ';
    return 0;
}

