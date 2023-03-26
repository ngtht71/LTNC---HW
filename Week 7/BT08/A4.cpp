#include <iostream>

using namespace std;
/**
int main()  {
   char **s;
   char foo[] = "Hello World";
   *s = foo;
   printf("s is %s\n",s);
   s[0] = foo;
   printf("s[0] is %s\n",s[0]);
   return(0);
}
*/
// sửa
int main()  {
   char **s = new char*;
   char foo[] = "Hello World";
   *s = foo;
   printf("s is %s\n",*s);
   s[0] = foo;
   printf("s[0] is %s\n",s[0]);

   delete s;
   return(0);
}


