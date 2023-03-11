#include <iostream>
#include <string>


using namespace std;

string DecToBin (int n)
{
    string s = "";
    while (n > 0){
        s = to_string (n % 2) + s;
        n /= 2;
    }
    return s;
}

int BinToDec (string s)
{
    int len = s.size();
    int res = 0;
    int tmp = 1;
    for (int i = len-1; i >= 0; i--){
        res = res + (s[i] - '0')*tmp;
        tmp *= 2;
    }
    return res;
}

int main ()
{
    int n; cin >> n;
    //string s = ;
    cout << DecToBin(n) << endl;
    string s; cin >> s;
    cout << BinToDec (s) << endl;
    return 0;
}
