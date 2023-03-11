#include <iostream>
#include <cmath>

using namespace std;

bool isPrime (int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main ()
{
    cout << "Enter N to find all of prime number < N: ";
    int N; cin >> N;
    for (int i = 0; i < N; i++)
        if (isPrime(i)) cout << i << ' ';


    return 0;
}
