#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n; cin >> n;
    for(int y = 0; y < n; y++)
    {
        for(int x = n-1; x >= 0; x--)
            (abs (x) + abs (y) < n) ? cout << '*' : cout << ' ';
        cout << endl;
    }
    return 0;
}

