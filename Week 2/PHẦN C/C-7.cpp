#include <iostream>

using namespace std;

int main ()
{
    int x, tmp;
    cin >> x;
    cout << x << ' ';
    tmp = x;
    do
    {
        cin >> x;
        if (x != tmp) cout << x << ' ';
        tmp = x;
    } while (x >= 0);
    return 0;
}

