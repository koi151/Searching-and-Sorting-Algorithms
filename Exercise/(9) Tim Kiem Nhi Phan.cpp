/*
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự giảm dần. Có Q truy vấn, mỗi truy vấn yêu cầu bạn kiểm tra xem phần tử X có xuất hiện trong mảng hay không?

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. Dòng thứ 3 là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là một số nguyên dương X.

Constraints

1<=N<=10^6; 1<=Q<=10^3; 0<=A[i],X<=10^9

Output Format

Đối với truy vấn in ra YES trên 1 dòng nếu X xuất hiện trong mảng, ngược lại in ra NO.

Sample Input 0

5
5 4 3 2 1
2
2
8
Sample Output 0

YES
NO
*/

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//========================================
int main (){
    FAST_IO;
    int n,x;
    cin >> n;
    int a[n], t;
    for (auto &x: a)
        cin >> x;
    sort(a, a+n);
    cin >> t;
    while (t--){
        cin >> x;
        cout << (binary_search(a,a+n,x)?"YES\n":"NO\n");
    }
    return 0;
}