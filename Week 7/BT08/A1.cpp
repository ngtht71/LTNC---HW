#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
}

void g(int yval)
{
   int y;
   y = yval;
   // in địa chỉ của y tại đây
   cout << &y << endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
}

//x và y có cùng địa chỉ
/*
hàm g khi nó được gọi (đều bắt đầu trên đỉnh stack của hàm main), cả hai hàm f và g cùng có 1 tham số kiểu int, cùng kiểu trả về,
x và y cùng là biến địa phương đầu tiên của hàm, do đó khả năng lớn là trình biên dịch xếp x và y ở cùng một địa chỉ.
*/
