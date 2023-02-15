#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int salary;
    if (n <= 100) salary = n*12000;
    else if (n > 100 && n <= 150) salary = 12000*100 + 16000*(n-100);
    else if (n > 150 && n <= 200) salary = 12000*100 + 16000*50 + 20000*(n-150);
    else salary = 12000*100 + 16000*50 + 20000*50 + 25000* (n - 200);
    cout << salary;
    return 0;
}

