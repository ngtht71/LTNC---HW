#include <iostream>
#include <algorithm>


using namespace std;

int* weird_sum(int a, int b) {
    int c;
    c = a + b;
    return &c;  // trả về con trỏ tới biến địa phương
}

int main (int argc, const char * atgv[])
{
    /**
    //lỗi truy cập con trỏ NULL tương đương truy cập địa chỉ 0 trong bộ nhớ
    int *pX = NULL;
    cout << pX << endl;
    cout << *pX;
    *pX = 0;
    */

    /**
    //dangling references: truy cập tới vùng nhớ k còn hợp lệ
    int a  = 20, b = 25, *pG;
    {
        int g;
        pG = &g;
        g = __gcd(a,b);   // __gcd (a,b) = UCLN (a,b)
    }

    {
        int temp=100;
        cout << "temp is " << temp << endl;
    }
    cout << "GCD (" << a << "," << b << ") = " << *pG;
    */

    /**
    // chạy bình thường???
    {
        int temp1;
        cout << &temp1 << endl;
    }
    {
        int temp2;
        cout << &temp2;
    }
    */

    /**
    // đổi kiểu --> lỗi không đổi được từ char -> int
    char a = 'a';
    char* p1 = &a;
    int* p2 = (int*) p1;
    *p2 = 'b';
    cout << p2 << endl << *p2;
    */

    /**
    //Hằng con trỏ
    int a = 20, b = 25, c = 30;
    const int* pA = &a;         // con trỏ tới hằng int
    int* const pB = &b;         // hằng con trỏ
    const int* const pC = &c;   // hằng con trỏ tới hằng int
    *pA += 1;   //65|error: assignment of read-only location '* pA' --> gtri a = const
    *pB += 1;   //gtri b co the doi dc
    *pC += 1;   //67|error: assignment of read-only location '*(const int*)pC'|

    pA = NULL;
    pB = NULL;  //70|error: assignment of read-only variable 'pB'|
    pC = NULL;  //71|error: assignment of read-only variable 'pC'|
    */

    /**
    //Lỗi thất thoát bộ nhớ
    int ptr1 = new int;
    int ptr2 = new int;
    ptr1 = ptr2;    //ptr1 và ptr2 trỏ tới ô nhớ của ptr2 --> ô nhớ của ptr1 k thể thu hồi
    */


    //Giải phóng bộ nhớ quá sớm
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2;    // con trỏ p2 tro den 1 vùng nhớ không còn hiệu lực
    return 0;

}
