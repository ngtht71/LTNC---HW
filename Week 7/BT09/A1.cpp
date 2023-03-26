#include <iostream>
#include <cstring>

using namespace std;

char* concat (const char* a, const char* b)
{
    int m = strlen(a);
    int n = strlen(b);
    int len = m+n;

    char* res = new char [len];
    strcpy (res, a);
    strcat (res, b);
    //strcpy (res+m, b);
    return res;
}

int main()
{
    char a[] = "Xin";
    char b[] = "Chao";
    cout << concat (a, b);
    return 0;
}
