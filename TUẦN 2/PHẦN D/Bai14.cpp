#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int x, maxx = 0, minn = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > maxx) maxx = x;
        if (x < minn) minn = x;
    }
    cout << minn << ' ' << maxx;
    return 0;
}

