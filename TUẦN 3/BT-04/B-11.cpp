#include <iostream>
#include <sstream>

using namespace std;

string inverse (string s){
    int len = s.size();
    stringstream ss;
    for (int i = len-1; i >= 0; i--) ss << s[i];
    string str = ss.str();
    return str;
}

int main ()
{
    int n; cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++)
     for (int j = 0; j < n; j++)
        if (inverse(s[i]) == s[j])
    {
        int len = s[j].size();
        cout << len << endl << (s[j])[len/2];
        return 0;
    }
    return 0;
}
