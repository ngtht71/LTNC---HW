#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;
};

void print (Point a)
{
    cout << "Mid Point = (" << a.x << "," << a.y << ")";
}

Point midPoint (const Point& a, const Point& b)
{
    Point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

int main ()
{
    Point a, b;
    cout << "Nhap toa do diem A: ";
    cin >> a.x >> a.y;
    cout << "Nhap toa do diem B: ";
    cin >> b.x >> b.y;

    Point mid = midPoint (a,b);
    print (mid);
    return 0;
}

