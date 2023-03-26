#include <iostream>

using namespace std;

int main()
{
    int* p = new int;

    // chưa cấp phát bộ nhớ động cho p2
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;
    cout << *p2;    // lỗi truy cập p2 vào con trỏ p đã bị xóa
    delete p2;

    return 0;
}
