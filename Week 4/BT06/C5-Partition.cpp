/**
Nhập vào 1 số nguyên N, in ra tất cả các số có tổng bằng N
input 4
output
1 1 1 1
1 1 2
1 3
2 2
4
*/
#include <iostream>
#include <vector>


using namespace std;

void print (int n, vector <int> res)
{
    if (n == 0){
        for (int i = 0; i < res.size(); i++) cout << res[i] << ' ';
        cout << endl;
    }
    for (int i = 1; i <= n; i++){
        if (res.empty() || i >= res.back()){   // neu i >= phan tu cuoi de ko lap lai 1 1 2 -- 2 1 1
            res.push_back(i);
            print (n-i, res);
            res.pop_back(); //bo phan tu cuoi di
        }
    }

}

int main ()
{
    int n; cin >> n;
    vector <int> res;
    print (n, res);
    return 0;
}

