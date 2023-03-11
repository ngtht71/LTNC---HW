#include <iostream>

using namespace std;

int main ()
{
    int n;
    string a;
    while (n < 10 && n >= 0){
        cin >> n;
        switch(n)
        {
            case 0: cout << "Vua nhap chu so khong" << endl; break;
            case 1: cout << "Vua nhap chu so mot" << endl; break;
            case 2: cout << "Vua nhap chu so hai" << endl; break;
            case 3: cout << "Vua nhap chu so ba" << endl; break;
            case 4: cout << "Vua nhap chu so bon" << endl; break;
            case 5: cout << "Vua nhap chu so nam" << endl; break;
            case 6: cout << "Vua nhap chu so sau" << endl; break;
            case 7: cout << "Vua nhap chu so bay" << endl; break;
            case 8: cout << "Vua nhap chu so tam" << endl; break;
            case 9: cout << "Vua nhap chu so chin" << endl; break;
        }
    }
    return 0;
}

