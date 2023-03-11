#include <iostream>

using namespace std;

void funct (int *a, int n)
{
    cout << sizeof(a) << endl;
}

int main ()
{
    int a[10];
    cout << sizeof (a) << endl; // kich thuoc cua 10 so int * 4 = 40
    funct (a, 10);  // tra ve kich thuoc con tro int
    return 0;
}
