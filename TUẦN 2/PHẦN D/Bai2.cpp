#include <iostream>

using namespace std;

int main (){
    int x, y;
    cin >> x >> y;
    int n = pow (x,y);
    cout << n << endl;
    int res = 1;
    for (int i = 1; i <= y; i++)
        res*=x;
    cout << res;
    return 0;
}
