#include <iostream>

using namespace std;

int main( )
{
    /**
    // kieu char
    //0x61fe14 : a
    //0x61fe15 : b
    //0x61fe16 : c
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   */

   /**
   // kieu int
//   0x61fe00 : 1
//   0x61fe04 : 2
//   0x61fe08 : 3
//   0x61fe0c : 4
//   0x61fe10 : 5
   int a[5] = {1,2,3,4,5};
   for (int* ptr = a; ptr < a+ 5; ptr++)
        cout << ptr << " : " << *ptr << endl;
        */

/**
// kieu double
//    0x61fdf0 : 1.1
//    0x61fdf8 : 2.2
//    0x61fe00 : 3.3
//    0x61fe08 : 4.4
//    0x61fe10 : 5.5
    double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    for (double* p = a; p < a+5; p++)
        cout << p << " : " << *p << endl;
    */

//    0x61fdf0 : 1.1
//    0x61fe00 : 2.2
//    0x61fe10 : 3.3
    double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    for (double* p = a; p < a+5; p+=2)
        cout << p << " : " << *p << endl;
    return 0;
}
