#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{

    int m,n;
    cin >> m >> n;
    char a[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    // tim vi tri boom xung quanh voi moi vi tri k co boom
    int dem[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            dem[i][j] = 0;


    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
    {
        if (a[i][j] == '.')
        {
            for (int t = i-1; t <= i+1; t++)
            for (int b = j-1; b <= j+1; b++){
                if (a[t][b] == '*' && b < n && b >= 0 && t < m && t >= 0) dem[i][j]++;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            (a[i][j] == '*') ? cout << a[i][j] << ' ' : cout << dem[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
