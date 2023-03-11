#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int Count;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> Count;
    double score[Count];
    double heso[Count];
    for (int i = 0; i < Count; i++)
    {
        cout << "He so mon hoc " << i+1 << ": ";
        cin >> heso[i];
    if (heso[i] != 3 || heso[i] != 1)
    {
        cout << "Nhap lai he so mon hoc " << i+1 << " (trong 1, 1.5, 2, 2.5, 3): ";
        cin >> heso[i];
    }

        cout << "Diem mon hoc " << i+1 << ": ";
        cin >> score[i];

        while (score[i] > 10 || score[i] < 0){
            cout << "Nhap lai diem mon hoc " << i+1
                 << " (trong khoang tu 0..10): ";
            cin >> score[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < Count; i++) sum+=score[i];
    cout << "Diem trung binh cua " << Count << " mon hoc: " << 1.0*sum/Count;
    return 0;
}

