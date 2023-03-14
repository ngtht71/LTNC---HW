#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;
    int arr[5] = {1,2,3,4,5};
};

int main ()
{
    Point a;
    cout << "Nhap toa do diem A: ";
    cin >> a.x >> a.y;

    Point x = a;
    int m[5] = {0};
    //x.arr = a.arr;  // error
    for (int i = 0; i < 5; i++) m[i] = x.arr[i];
    for (int i = 0; i < 5; i++) cout << &m[i] << ' ';
    cout << endl;
    for (int i = 0; i < 5; i++) cout << &a.arr[i] << ' ';


    return 0;
}


