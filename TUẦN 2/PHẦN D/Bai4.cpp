#include <iostream>

using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;
    int maxx = max (a,b);
    for (int i = maxx; i <= a*b; i+=maxx)
        if (i % a == 0 && i % b == 0) cout << i;
    return 0;
}
