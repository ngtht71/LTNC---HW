#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;

    Point (double x_, double y_)
    {
        x = x_;
        y = y_;
    }
};

void print (Point a)
{
    cout << "A (" << a.x << "," << a.y << ")";
}

int main ()
{
    double x, y;
    cin >> x >> y;
    Point a (x,y);
    print (a);
    return 0;
}
