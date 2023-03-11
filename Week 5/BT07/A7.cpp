#include <iostream>
#include <cstring>

using namespace std;

int same (char* a, char* b)
{
    int dem = 0;
    int len1 = strlen(a);
    int len2 = strlen(b);
    int maxx = max(len1,len2);
    int minn = min(len1, len2);
    for (int i = 0; i <= maxx-minn; i++)
        if (strncmp(a, b+i,minn) == 0) dem++;   // dem trong b co bn chuoi a
    return dem;
}

int main ()
{
    char a[] = {"abc"};
    char b[] = {"adehabcghabcv"};
    cout << same(a, b);
    return 0;
}
