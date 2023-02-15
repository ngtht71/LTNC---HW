#include <iostream>
#include <sstream>

using namespace std;

int main ()
{

    string s0 = "a", s1 = "b", sn;
    cout << s0 << endl << s1 << endl;
    for (int i = 2; i <= 10; i++)
    {
        stringstream ss;
        ss << s1 << s0;
        sn = ss.str();

        cout << ss.str() << endl;
        s0 = s1;
        s1 = sn;
    }
    return 0;
}

