#include <iostream>

using namespace std;

int main ()
{
    int n = 5;
    int* p = new int;
    p = &n;
    *p +=3;
    delete p;
    // giải phóng p
    // sau khi giải phóng p, địa chỉ của n bị giải phóng -> địa chỉ n k xác định
    cout << n << endl;
    cout << *p;
    return 0;
}
