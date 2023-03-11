#include <iostream>

using namespace std;

//Hàm in các dấu sao trên 1 dòng
void print (int m, int n)
{
    //int m = n-1; // m la so dau cach tren hang 1
    for (int i = 1; i <= m; i++) cout << ' ';
    for (int i = 1; i <= n; i++) cout << '*';
}

int main ()
{
    cout << "Nhap vao so dong can in tam giac: ";
    int n; cin >> n;
    int m = n-1;    // m là số dấu cách trên 1 dòng
    int i = 1;  // i là số dấu sao trên 1 dòng
    while (m >= 0)
    {
        print (m, i);
        m --;
        i += 2;
        cout << endl;
    }
    return 0;
}
