/**
Viết chương trình nhận vào từ bàn phím số nguyên n, in ra màn hình tam giác Pascal có bậc n
input   output
3       1
        1 1
        1 2 1
        1 3 3 1
*/
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    n++;
    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) a[i][j] = 0;

    for (int i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
        if (i >= 2)
            for (int j = 1; j < i; j++)
            a[i][j] = a[i-1][j] + a[i-1][j-1];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            if (a[i][j] != 0) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
