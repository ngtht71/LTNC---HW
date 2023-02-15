#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    double a, b, c;
    cin >> a >> b >> c;
    double dental = b*b - 4*a*c;
    if (dental < 0)
    {
        double res = -b/(2*a);
        double du = c - res*res;
        double phuc = sqrt (du);
        cout << setprecision (2) << fixed << res << " " << -phuc << endl
                                          << res << ' ' << phuc << endl;
    }
    else if (dental > 0)
        cout << setprecision (2) << fixed << (-b - sqrt (dental)) / 2 /a << endl << (-b + sqrt (dental)) / 2 /a;
    else {
        cout << setprecision (2) << fixed << -b / (2*a);
    }
    return 0;
}

