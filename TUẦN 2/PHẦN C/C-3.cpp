#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n; cin >> n;
    for(int y= 0; y <= n; y++)
    {
        for(int x=-n; x<= n; x++)
            (abs (x) <= abs (y)) ? cout << '*' : cout << ' ';
        cout << endl;
    }
    return 0;
}

