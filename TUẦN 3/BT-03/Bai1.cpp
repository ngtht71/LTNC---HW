/**
Viết chương trình nhập vào một dãy số. In ra giá trị trung bình (μ) và phương sai (σ^2) của dãy số đó.
phương sai = (xi - tb)/so phan tu; i = 1,2,...
input 6 7 7 3 9 10
output 7.00
       5.00
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int x, n;
    cin >> n;
    int i = 0;
    double sum=0, variance = 0; // variance: phuong sai
    while (i < n)
    {
        cin >> x;
        sum += x;
        i++;
    }
    cout << setprecision(2) << fixed << sum/n;
    for (int j = 0; j < n)
    return 0;
}
