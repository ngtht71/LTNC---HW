#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

int main()
{
	// initialize random number generator
	srand(time(0)); // set initial seed value to system clock
	// generate random number
	int a, b;
	a = rand() % 101;
	b = rand() % 101;
	cout << a << ' ' << b << endl;

	int n;
	cout << "Bob chon xem the: ";
	cin >> n;
	if (n == 1) // neu bob chon xem the 1
    {
        int x;
        cout << a << endl << "Bob chon the: ";
        (a >= 50) ? x = 1 : x = 2;  // neu the xem dc >= 50 thi chon the do k thi chon the con lai
        cout << x << endl;
        if (x == 1)
            (a > b) ? cout << "Win" : cout << "Lose";
        if (x == 2)
            (a < b) ? cout << "Win" : cout << "Lose";
    }
    else if (n == 2) // neu bob chon xem the 2
    {
        int x;  // x la the bob chon
        cout << b << endl << "Bob chon the: ";
        (b >= 50) ? x = 2 : x = 1;
        cout << x << endl;
        if (x == 1)
            (a > b) ? cout << "Win" : cout << "Lose";
        if (x == 2)
            (a < b) ? cout << "Win" : cout << "Lose";
    }
    else cout << "ERROR";
	return 0;
}

