#include <iostream>
#include <cmath>

using namespace std;

int strlen (const char a[])
{
    int len = 0;
    while (a[len] != '\0') len++;
    return len;
}

char* strcp (const char a[])
{
    int n = strlen (a);
    char* s = new char [100];
    for (int i = 0; i < n; i++)
        s[i] = a[i];
    s[n] = '\0';
    return s;
}

char* reverse_ (const char a[])
{
    int len = strlen (a);
    char* res = strcp (a);
    for (int i = 0; i < len/2; i++) swap (res[i], res[len-1-i]);
//    for (int i = 0; i < len; i++) cout << a[i];
    return res;
}

char* delete_char (const char a[], const char c)
{
    int n = strlen(a);

    char* s = new char [n];
    s = strcp (a);

    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != c) s[dem++] = s[i];
    s[dem] = '\0';
//    for (int i = 0; i <= dem; i++) cout << a[i];
    return s;
}

char* pad_right (const char a[], int n)
{
    int len = strlen (a);
    char* s = new char [len];
    s = strcp (a);
    if ( len < n )
        for (int i = len; i < n; i++) s[i] = '_';

    s[n] = '\0';
    // ki tu ket thuc chuoi neu ko se bi 1 dau cach o cuoi xau
    return s;
}

char* pad_left (const char a[], int n)
{
    int len = strlen (a);
    char* s = new char [len];
    s = strcp (a);
    if (len < n)
    {
        int j = len-1;
        for (int i = n-1; i >= n-len; i--) {
            s[i] = s[j];
            j--;
        }
        for (int i = 0; i < n-len; i++) s[i] = '_';
        s[n] = '\0';
    }
    return s;
}

char* truncate (const char a[], int n)
{
    int len = strlen(a);
    char* s = new char [len];
    s = strcp (a);

    if (len > n){
        s[n] = '\0';
        //return s;
    }
    return s;
}

char* trim_left (const char a[])
{
    int len = strlen(a);
    char* s = new char [len];
    s = strcp (a);

    int space = 0;
    for (int i = 0; i < len; i++){
        if (s[i] == ' ' && s[i+1] == ' ') space++;
        if (s[i] != ' ') break;
    }
    space++;    //s[0] = ' '
    int tmp = len - space;
    while (space > 0)
    {
        for (int i = 0; i < len; i++)
            s[i] = s[i+1];
        space--;
    }
    s[tmp] = '\0';
    return s;
}

char* trim_right (const char a[])
{
    int len = strlen(a);
    char* s = new char [len];
    s = strcp (a);

    cout << len << endl;
    int space = 0;
    for (int i = len-1; i >= 0; i++)
    {
        if (s[i] == ' ' && s[i-1] == ' ') space++;
        if (s[i] != ' ') break;
    }
    space++;
    s[len-space-1] = '\0';

    return s;
}

int main ()
{
    const char a[] = "      abcd  abcds_    ";
    char c = 'b';
    int n; cin >> n;

    char* s = new char [strlen(a)];
    cout << a << endl;

    // đảo xâu
    s = reverse_ (a);
    cout << "Dao xau: "<< s << endl;

    // xóa kí tự
    s = delete_char (a, c);
    cout << "Xoa ki tu: " << s << endl;

    // độn phải
    s = pad_right (a, n);
    cout << endl << "Do dai xau truoc khi them: " << strlen(a) << endl;
    cout << "Don phai: " << s << endl;
    cout << "Do dai xau sau khi them: " << strlen(s) << endl;

    // độn trái
    s = pad_left(a, n);
    cout << endl << "Do dai xau truoc khi them: " << strlen(a) << endl;
    cout << "Don trai: " << s << endl;
    cout << "Do dai xau sau khi them: " << strlen(s) << endl;

    //cắt xâu
    s = truncate (a, n);
    cout << endl << "Cat xau: " << s << endl;

    // lọc trái
    s = trim_left (a);
    cout << endl << "Do dai xau truoc khi cat: " << strlen(a) << endl;
    cout << "Loc trai: " << s << endl;
    cout << "Do dai xau sau kh-i cat: " << strlen(s) << endl;

    // lọc phải
    s = trim_right(a);
    cout << endl << "Do dai xau truoc khi cat: " << strlen(a) << endl;
    cout << "Loc phai: " << s << endl;
    cout << "Do dai xau sau khi cat: " << strlen(s) << endl;

    return 0;
}
