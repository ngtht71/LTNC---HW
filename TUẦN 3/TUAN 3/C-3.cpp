#include <iostream>

using namespace std;

int inverse (int n)
{
    int i = 0;
    char c[100];
    while (n > 0)
    {
        //int tmp;
        c[i++] = n % 10 + '0';
        n /= 10;
    }

    int x=0;
    int tmp = 1;
    for (int j = i-1; j >= 0; j--)
    {
        x += (c[j] - '0')*tmp;
        tmp *= 10;
    }
    return x;
}

bool palindrome (int n) // palindrome: số đối gương
{
    int x = inverse(n);
    if (x == n) return true;
    return false;
}

int main ()
{
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int dem = 0;
        for (int j = a; j <= b; j++)
            if (palindrome(j)) dem++;
        cout << dem << endl;
    }
    return 0;
}
