#include <iostream>
#include <cstring>

using namespace std;

struct String {
    int n;  //strlen
    char* str;
    String s(const char* ptr){
        n = strlen (ptr);
        str = new char [n];
        strcpy (str, ptr);
    }
    ~String(){
        delete [] str;
    }
    void print(){
        cout << str << endl;
    }
    void append (const char* ptr)
    {
        strcat (s, ptr);
    }

};

int main ()
{

    return 0;
}
