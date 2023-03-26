#include <iostream>

using namespace std;

void swap_pointers(char** x, char** y)  // con trỏ trỏ tới con trỏ
{
   char *tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
//   swap_pointers(s1,s2); // truyền tham trị
   swap_pointers(&s1,&s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}

// vi chi truyen tham tri nen ham swap chi tao ban sao cua s1 s2 -- ko swap
