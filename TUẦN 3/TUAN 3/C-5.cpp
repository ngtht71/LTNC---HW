#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    cout << "Nhap 2 so nho hon 10: ";
    cin >> x >> y;

    int a[x*y];
    for (int i = 0; i < x*y; i++) a[i] = i+1;

    int b[x][y];
    for (int i = 0; i< x; i++)
    for (int j = 0; j< y; j++)
        b[i][j] = 0;

    int index = 0;
    for (int i = 0; i < y; i++) {
        b[0][i] = a[index++]; // chen hang 1 mat y phan tu mang a
    }

    for (int i = 1; i < x; i++)
        b[i][y-1] = a[index++]; // chen cot cuoi mat x phan tu mang a

    for (int i = y-2; i >= 0; i--) b[x-1][i] = a[index++]; //
    for (int i = x-2; i > 0; i--) b[i][0] = a[index++];
    for (int i = 1; i < x-1; i++) b[i][y-2] = a[index++];

    while (x*x + y*y == 0)
    {
        for (int i = 0; i < y; i++) b[0][i] = a[index++];   // chen hang dau
        for (int i = 1; i < x; i++) b[i][y-1] = a[index++]; // chen cot cuoi
        for (int i = 1; i < x; i++)
    }

    for (int i = 0; i< x; i++){
    for (int j = 0; j< y; j++)
        cout << b[i][j] << ' ';
    cout << endl;
    }
    return 0;
}
