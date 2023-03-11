#include <iostream>
#include <math.h>

using namespace std;
/**
int round_number (double n)
{
    int res = floor(n);  // floor lam tron xuong 2.4 -> 2
    if (n - res < 0.5) return res;
    return ceil (n); // lam tron len
}
*/
int main ()
{
    double n;
    cin >> n;
    //cout << round_number (n);

    // k dung ceil va floor trong cmath
    int res = n; // lay phan nguyen -> lam tron xuong
    if (n - res >= 0.5) res++;
    cout << res << endl;
    return 0;
}
