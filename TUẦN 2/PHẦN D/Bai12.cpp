#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int i = sqrt(n);
    (i * i == n) ? cout << "YES" : cout << "NO";
    return 0;
}

