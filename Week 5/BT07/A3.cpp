#include <iostream>
#include <cmath>

using namespace std;

int count_event (int* a, int len)
{
    int dem = 0;
    for (int i = 0; i < len; i++)
        if (abs(a[i]) % 2 == 0) dem++;
    return dem;
}

int main ()
{
    int a[10] = {1, 4, 5, 3, 34, 2, 9, 0, 29, 10};
    cout << count_event (a, 5) << endl; //5 phan tu dau mang
    cout << count_event (&a[5], 5); // 5 phan tu cuoi mang
    return 0;
}
