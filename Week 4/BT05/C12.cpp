#include <iostream>

using namespace std;

double toHop (int k, int n)
{
    int res1 = 1;   //n!    //nCk = n! / (k! * (n-k)! )
    int res2 = 1;   //k!
    int res3 = 1;   //(n-k)!
    for (int i = 2; i <= n; i++){
        res1 *= i;
        if (i <= n-k) res3 *= i;
    }
    for (int i = 2; i <= k; i++) res2 *= i;
    return res1/(res2 *res3);
}

int kiemTra (int k, int n)
{
    if (0 <= k && k <= n && 1 <= n && n <= 20)
        return 1;
    return 0;
}

int main ()
{
    int n, k;
    do {
        cin >> k >> n;
        if (kiemTra (k, n)) cout << toHop (k,n);
        else return 0;
    } while (n != -1 && k != -1);
    return 0;
}
