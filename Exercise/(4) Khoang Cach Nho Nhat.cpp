/*
Cho mảng số nguyên A[] có N phần tử, tìm độ chênh lệch nhỏ nhất giữa 2 phần tử A[i] và A[j] trong mảng(i và j khác nhau).

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; 0<=A[i]<=10^9

Output Format

In ra độ lệch nhỏ nhất của 2 phần tử trong mảng

Sample Input 0

5
1 2 7 9 0
Sample Output 0

1
*/

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;




//=================================================
int main (){
    FAST_IO;
    int n, ans = 1e9+7;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a+n);
    for ( int i = 1; i < n; i++)
        ans = min(ans, a[i]-a[i-1]);
    cout << ans;
    return 0;
}