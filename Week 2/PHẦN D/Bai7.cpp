#include <iostream>

using namespace std;

int main ()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    // dung phuong phap cramer (dinh thuc ma tran)
    int D, Dx, Dy;
    D = a1 *b2 - a2* b1;
    Dx = c1*b2-c2*b1;
    Dy = a1*c2-a2*c1;
    if (D == 0) (Dx + Dy == 0) ? cout << "Vo so nghiem" : cout << "Vo nghiem";
    else cout << "x = " << Dx/D << ", y = " << Dy /D;
    return 0;
}

