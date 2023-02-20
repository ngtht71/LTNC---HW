/**
Eratosthenes sieve.
Sàng Eratosthenes là một phương pháp hiệu quả để liệt kê các số nguyên tố trong khoảng từ 1 đến N.
Ý tưởng thuật toán: bắt đầu với các số nguyên từ 2 đến N. Duyệt từ đầu dãy, nếu một số vẫn còn trong dãy
thì ghi nhận đó chính là một số nguyên tố và xoá khỏi dãy tất cả các bội số của nó.
Hãy viết một chương trình với input là số N và output là chuỗi tất cả các số nguyên tố trong khoảng từ 1 đến N.
*/
#include <iostream>
#include <cmath>

using namespace std;

void boi (int n)
{
    // khoi tao bien prime cho tat ca so <n la true
    bool prime[n+1];
    for (int i = 0; i < n+1; i++) prime[i] = true;
    for (int i = 2; i < sqrt(n); i++)
        if (prime[i])
            for (int j = 2*i; j <= n; j += i)
                prime[j] = false;
    //print
    for (int i = 2; i < n; i++)
        if (prime[i]) cout << i << ' ';
}

int main ()
{
    int n; cin >> n;
    boi(n);
    return 0;
}
