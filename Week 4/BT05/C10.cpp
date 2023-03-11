#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool Divisible (int a, int b, int c)
{
    return (a+b+c) % 25 == 0;
}

int main ()
{
    int n; cin >> n;
    srand (time(0));

    int a[n];
    for (int i = 0; i < n; i++) a[i] = rand()% 50;
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            for (int k = j+1; k < n; k++)
                if (Divisible(a[i], a[j], a[k]))
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] << endl;

    return 0;
}
