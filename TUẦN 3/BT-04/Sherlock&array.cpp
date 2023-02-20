#include <iostream>

using namespace std;

int main ()
{
    int test; cin >> test;
    for (int i = 1; i <= test; i++)
    {
        int n; cin >> n;
        int a[n], sum[n];
        sum[0] = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> a[j];
            sum[j] = sum[j-1] + a[j];
            //cout << sum[j] << ' ';
        }
        bool check = false;
        for (int k = 1; k <= n; k++)
            if (sum[k-1] == sum[n] - sum[k]) check = true;
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }cin.get();cin.get();
    return 0;
}
