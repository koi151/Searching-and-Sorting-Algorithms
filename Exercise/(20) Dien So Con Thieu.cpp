/*
Cho mảng A[] gồm n số nguyên dương. Gọi L, R là min và max các phần tử của A[]. Nhiệm vụ của bạn là tìm số phần 
tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta 
nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.

Input Format

Dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết 
cách nhau một vài khoảng trống.

Constraints

1=n<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng số còn thiếu

Sample Input 0

5
4 5 3 8 6
Sample Output 0

1
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;
//===============================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for (auto &it : a) cin >> it;
    sort(a, a+n);
    for ( int i = 0; i < n-1; i ++)
    {
        if (a[i+1] - a[i] > 1)
            cnt += a[i+1] - a[i] - 1;
    }
    cout << cnt;

    return 0;
}