/*
Cho mảng số nguyên A[] có N phần tử, hãy tìm số xuất hiện nhiều nhất trong mảng.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; -10^9<=A[i]<=10^9

Output Format

In ra số có số lần xuất hiện nhiều nhất và tần suất tương ứng, nếu có nhiều số có cùng số lần xuất hiện thì in ra số nhỏ nhất.

Sample Input 0

5
1 2 2 1 3
Sample Output 0

1 2
*/

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//========================================================
int main (){
    FAST_IO;
    int n; 
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a+n);

    int val = a[0], res = 1, cnt = 1;
    for (int i = 0; i < n-1; i ++){
        if (a[i] == a[i+1])
            cnt ++;
        else cnt = 1;
        if (cnt > res){
            res = cnt;
            val = a[i];
        } 
    }
    cout << val << ' ' << res; 
    return 0;
}