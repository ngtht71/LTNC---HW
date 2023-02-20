/**
Viết chương trình nhập vào một dãy số gồm N phần tử, mỗi phần tử trong khoảng từ 0 đến 9.
Đếm số lượng các sô 0, 1, 2, …, 8, 9 trong dãy số đó.
*/
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    int dem[10];
    for (int i = 0; i < 10; i++) dem[i] = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        dem[a[i]]++;
    }
    for (int i = 0; i < 10; i++)
        cout << i << " : " << dem[i] << endl;

    return 0;
}
