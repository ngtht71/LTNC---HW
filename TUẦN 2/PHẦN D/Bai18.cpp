#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int score[5];
    int dem = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Diem mon hoc " << i+1 << ": ";
        cin >> score[i];
        if (score[i] > 10){
            cout << "Nhap lai diem mon hoc " << i+1
                 << " (trong khoang tu 0..10): ";
            cin >> score[i];
        }
        dem++;
        if (score[i] < 0) {
            dem--;
            break;
        }
    }
    int sum = 0;
    for (int i = 0; i < dem; i++) sum+=score[i];
    cout << "Diem trung binh cua " << dem << " mon hoc: " << 1.0*sum/dem;
    return 0;
}

