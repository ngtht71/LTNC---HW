#include <iostream>
#include <cmath>

using namespace std;

int strlen (char a[])
{
    int len = 0;
    while (a[len] != '\0') len++;
    return len;
}

char* strcp (char a[])
{
    int n = strlen (a);
    char* s = new char [100];
    for (int i = 0; i < n; i++)
        s[i] = a[i];
    s[n] = '\0';
    return s;
}

void reverse_ (char a[])
{
    int len = strlen (a);
    for (int i = 0; i < len/2; i++) swap (a[i], a[len-1-i]);
//    for (int i = 0; i < len; i++) cout << a[i];
}

void delete_char (char a[], char c)
{
    char* s;
    int n = strlen(a);
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != c) a[dem++] = a[i];
    a[dem] = '\0';
//    for (int i = 0; i <= dem; i++) cout << a[i];
}

void pad_right (char a[], int n)
{
    int len = strlen (a);
    if ( len < n )
        for (int i = len; i < n; i++) a[i] = '_';

    a[n] = '\0';
    // ki tu ket thuc chuoi neu ko se bi 1 dau cach o cuoi xau
}

void pad_left (char a[], int n)
{
    int len = strlen (a);
    if (len < n)
    {
        int j = len-1;
        for (int i = n-1; i >= n-len; i--) {
            a[i] = a[j];
            j--;
        }
        for (int i = 0; i < n-len; i++) a[i] = '_';
        a[n] = '\0';
    }
}

void truncate (char a[], int n)
{
    int len = strlen(a);
    if (len > n){
        a[n] = '\0';
    }
}

bool is_palindrome (char a[])
{
    int len = strlen(a);
    bool res = true;
    for (int i = 0; i <= len/2; i++)
        if (a[i] != a[len-1-i]) res = false;

    return res;
}

void trim_left (char a[])
{
    int len = strlen(a);
    int space = 0;
    for (int i = 0; i < len; i++){
        if (a[i] == ' ' && a[i+1] == ' ') space++;
        if (a[i] != ' ') break;
    }
    space++;    //s[0] = ' '
    int tmp = len - space;
    while (space > 0)
    {
        for (int i = 0; i < len; i++)
            a[i] = a[i+1];
        space--;
    }
    a[tmp] = '\0';
}

void trim_right (char a[])
{
    int len = strlen(a);
    cout << len << endl;
    int space = 0;
    for (int i = len-1; i >= 0; i++)
    {
        if (a[i] == ' ' && a[i-1] == ' ') space++;
        if (a[i] != ' ') break;
    }
    space++;
    cout << space << endl;
    a[len-space-1] = '\0';
    cout << a << endl;
}

int main ()
{
    char a[] = "      abcd  abcds   ";
    char c = 'b';
    int n; cin >> n;

    char* s = strcp (a);
    cout << s << endl;
    /**
    // đảo xâu
    reverse_ (s);
    cout << s << endl;

    // xóa kí tự
    delete_char (s, c);
    cout << s << endl;

    // độn phải
    pad_right (s, n);
    cout << s << endl;

    // độn trái
    pad_left(s, n);
    cout << s << endl;
*/
    //cắt xâu
    //truncate (s, n);
    //cout << s << endl;

    // đối gương
    cout << is_palindrome (s) << endl;

    // lọc trái
    trim_left (s);
    cout << s << endl;

    // lọc phải
    trim_right(s);
    cout << strlen(s);
    return 0;
}
