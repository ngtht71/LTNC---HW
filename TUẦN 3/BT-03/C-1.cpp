#include <iostream>
#include <ctime>

using namespace std;

int main (){
    int n; cin >> n;
    int a[n];
    srand (time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % n +1;
        cout << a[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] == a[j]) {
                cout << "YES";
                return 0;
            }
    cout << "NO";

    return 0;
}
