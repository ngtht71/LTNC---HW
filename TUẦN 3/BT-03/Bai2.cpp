#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i< n; i++) cin >> a[i];

    int minn = a[0], maxx = a[0];
    int sum_chan = 0, count_le = 0;
    for (int i = 0; i< n; i++){
        if (a[i] < minn) minn = a[i];
        if (a[i] > maxx) maxx = a[i];
        if (abs(a[i]) % 2 == 0) sum_chan += a[i];
        if (abs(a[i]) % 2 == 1) count_le++;
    }
    cout << maxx << endl << minn << endl << sum_chan << endl << count_le;
    return 0;
}
