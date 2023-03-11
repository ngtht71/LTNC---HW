#include <iostream>

using namespace std;

char* weird_string()
{
    char c[] = "12345";
    return c;
}

int main ()
{
    cout << weird_string();
    // không cout ra gì
    //warning: address of local variable 'c' returned [-Wreturn-local-addr]|
    /*
    không được trả về địa chỉ của một vùng nhớ không hợp lệ. Mảng c là biến địa phương của hàm weird_string,
    khi truy nhập mảng c khi hàm weird_string đã kết thúc, ta đang truy nhập vào vùng bộ nhớ stack đã bị thu hồi,
    không thể đảm bảo dữ liệu cũ vẫn còn ở đó, thậm chí có thể dẫn đến các lỗi hệ thống nghiêm trọng khác.
    */
    return 0;
}
