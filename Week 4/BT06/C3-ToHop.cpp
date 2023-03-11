#include<iostream>

using namespace std;

// khoi tao cac bien = 0
int res[100], val[100], n, k;
// khoi tao res luu cac chu cai moi truong hop vd a b c --> abc acb....
// khoi tao val co n so 0 de luu 0 + 'a' -> n + 'a'

void print() {
	for (int i = 1; i <= k; i++) cout << char(res[i] + 'a' - 1);
	cout << endl;
}

void ToHop(int i) {    //hoan vi voi i chay tu 1 -> k
	for (int j = res[i-1]+1; j <= n-k+i; j++)
		if (val[j] == 0) {
            res[i] = j;
			val[j] = 1;
			(i == k) ? print() : ToHop(i+1);
            val[j] = 0;
		}
}

int main() {
    cout << "Nhap vao 2 so nguyen n va k (n > k): ";
	cin >> n >> k;
    ToHop (1);
	return 0;
}
