#include <iostream>

using namespace std;



void print (double m[][4], int n, double a, double b, double c)
{
    double first, mid, last;
    first = max (a,b);  // ham max min chi dung cho so duong
    first = max (a,c);
    first = max (b,c);

    last = min (a,b);
    last = min (a,c);
    last = min (b,c);

    mid = a+b+c - first - last;

    int index[n];
    for (int i = 0; i< n; i++)
        for (int j = 0; j < 4; j++)
        {
            if (m[i][j] == first) index[0] = i+1;
            if (m[i][j] == mid) index[1] = i+1;
            if (m[i][j] == first) index[2] = i+1;

        }
    for (int i = 0; i < 3; i++)
    {
        cout << index[0] << ' ';
        for (int j = 0; j < 3; j++)
            cout << m[index[0]][j] << ' ';
        cout << endl;
    }
}

int main ()
{
    int n; cin >> n;
    double a[n][4];

    double sum[3];
    for (int i = 0; i< 3; i++) sum[i] = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
            sum[i] += a[i][j];
        }
        a[i][3] = sum[i] / 3;
    }
    print (a[][4], n, a[0][0], a[1][0], a[2][0]);
    return 0;
}
