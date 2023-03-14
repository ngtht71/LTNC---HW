#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;
};

int main ()
{
    Point a;
    cout << &a << endl << &a.x << endl << &a.y;
    return 0;
}

//địa chỉ của Point a = địa chỉ tọa độ x của a
// địa chỉ tọa độ y của a hơn địa chỉ a 1 khoảng bằng độ lớn của kiểu double
