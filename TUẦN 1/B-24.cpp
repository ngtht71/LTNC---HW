#include <iostream>

using namespace std;

bool LeapYear (int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
    return false;
}

int check (int d, int m, int y)
{
    int DayMax;
    if (m <= 12 && m >= 1)
    {
        switch (m)
        {
        case 2:
            {
                (LeapYear (y)) ? DayMax = 29 : DayMax = 28;
                break;
            }
        case 4: case 6: case 9: case 11:
            {
            DayMax = 30;
            break;
            }
        default:
            {
                DayMax = 31;
                break;
            }
        }
    }
    return DayMax;
}

int main ()
{
    int d, m, y, DayMax;
    cin >> d >> m >> y;
    DayMax = check (d, m, y);
    if (d < 0 || d > DayMax) return 0;
    int a = (14 - m) /12;
    m = m + 12*a - 2;
    y = y - a;
    int DayOfWeek = (d + y + y/4 + y/400 - y/100 + (31*m)/12 ) % 7;
    (DayOfWeek == 0) ? cout << "Chu nhat" : cout << "Thu " << DayOfWeek+1;
    return 0;
}

