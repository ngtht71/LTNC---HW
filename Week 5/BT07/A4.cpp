#include <iostream>

using namespace std;

int search_key (int key, int* a, int low, int high)
{
    if (low > high) return -1;

    int mid = (low + high) / 2;
    int* p = &a[mid];
    if (*p == key) return mid;  //hoac a[mid] = *(a+mid)
    if (*p > key) return search_key (key, a, low, mid-1);
    return search_key (key, a, mid+1, high);
}
int main ()
{
    int a[10] = {1, 5, 7, 9, 12, 15, 21, 24, 31, 47};
    cout << "Nhap so can tim: ";
    int key; cin >> key;
    //cout << a[0] << a[9] << endl;
    int index = search_key (key, a, 0, 9);
    cout << index+1;
    return 0;
}
