/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

Input Format

Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints

2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng cặp số có tổng bằng k

Sample Input 0

4 4
2 2 2 2
Sample Output 0

6
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;
//===================================================
int main ()
{
    FAST_IO;
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto & it : a) cin >> it;
    sort(a, a+n);

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        auto l = lower_bound(a + i + 1, a+n, k - a[i]);
        if (l != a+n)
        {
            if ( *l == k - a[i])
            {
                auto r = upper_bound(a + i + 1, a+n, k - a[i]);
                ans += r - l;
            }
        }
    }
    cout << ans;

    return 0;
}