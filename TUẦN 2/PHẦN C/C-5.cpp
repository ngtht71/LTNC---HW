#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>

using namespace std;

string donvi (int n)
{
    string a;
    switch (n)
    {
        case 0: a = "zero"; break;
        case 1: a = "one"; break;
        case 2: a = "two"; break;
        case 3: a = "three"; break;
        case 4: a = "four"; break;
        case 5: a = "five"; break;
        case 6: a = "six"; break;
        case 7: a = "seven"; break;
        case 8: a = "eight"; break;
        case 9: a = "nine"; break;
    }
    return a;
}
string doc1(int n)
{
    string a;
    switch (n)
    {
        case 10: a = "ten"; break;
        case 11: a = "eleven"; break;
        case 12: a = "twelve"; break;
        case 13: a = "thirteen"; break;
        case 14: a = "fourteen"; break;
        case 15: a = "fifthteen"; break;
        case 16: a = "sixteen"; break;
        case 17: a = "seventeen"; break;
        case 18: a = "eighteen"; break;
        case 19: a = "nineteen"; break;
    }
    return a;
}

string doc2 (int n) // doc chu so hang chuc
{
    string a;
    switch (n)
    {
        case 2: a = "twenty"; break;
        case 3: a = "thirty"; break;
        case 4: a = "forty"; break;
        case 5: a = "fifthty"; break;
        case 6: a = "sixty"; break;
        case 7: a = "seventy"; break;
        case 8: a = "eighty"; break;
        case 9: a = "ninety"; break;
    }
    return a;
}

string hundred (int n)      // 3 chu so hang tram -> don vi
{
    stringstream s;
    int a, b,c;
    a = n / 100;    // chu so hang tram
    b = (n /10) % 10;   // chu so hang chuc
    c = n % 10;    //chu so hang don vi
//    cout << a << ' ' << b << ' ' << c << endl;
    string s1, s2;
    if (a != 0){
        s1 = donvi(a);  // doc chu so hang tram
        s << s1 << " hundred ";
    }
    // doc chu so hang chuc
    if (b == 1)
    {
        s2 = doc1 (n % 100);  // doc 2 chu so cuoi
        s << s2;
    }
    if (b != 0 && b != 1){
        s2 = doc2(b);  // doc chu so hang chuc
        s << s2;
        if (c != 0) s << "-" << donvi(c);   // doc 2 so cuoi
    }
    if (b == 0 && c != 0){
        s2 = donvi(c);
        s << s2;
    }
    if (a == 0 && b == 0 && c == 0) s << "zero";
    return s.str();
}

string thousand (int n) // doc 3 chu so hang tram nghin -> nghin xxx.NNN.xxx
{
    string s[2];
    s[0] = hundred(n);    // van thuc hien lenh trong hundred (n) chu k chi dua ve return
    s[1] = " thousand ";
    if (s[0] != "zero") return s[0] + s[1];
    return "";
}

string million(int n)   // doc 3 chu so hang trieu
{
    string s[2];
    s[0] = hundred(n);
    s[1] = " million ";
    if (s[0] != "zero") return s[0] +s[1];
    return "";
}

int main ()
{
    int x; cin >> x;
    int n = abs (x);

    stringstream ss;
    ss << n;
    string s = ss.str();

    int a[3];
    for (int i = 2; i >= 0; i--)
    {
        a[i] = n % 1000;
        n /= 1000;
    }
    if (x >= 0) {
        if ((a[0] != 0 || a[1] != 0) && a[2] == 0) cout << million (a[0]) << thousand(a[1]);
        else cout << million (a[0]) << thousand(a[1])  << hundred (a[2]);

    }
    else {
        if ((a[0] != 0 || a[1] != 0) && a[2] == 0) cout << "negative " << million (a[0]) << thousand(a[1]);
        else cout << "negative " << million (a[0]) << thousand(a[1])  << hundred (a[2]);
    }
    return 0;
}

