#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int n; cin >> n;
    srand (time(0));
    int res;
    res = rand() % n;
    cout << res << endl;
    return 0;
}
