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
// tham trị
void PassByVal (Point a)
{
    cout << &a << endl;
}

void PassByReference (Point &a)
{
    cout << &a << endl;
}

int main ()
{
    double x, y;
    cin >> x >> y;
    Point a (x,y);

    cout << &a << endl;
    PassByVal (a);
    PassByReference (a);
    return 0;
}
