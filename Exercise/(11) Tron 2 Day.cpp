/*
Để sắp xếp tăng dần một mảng A gồm n phần tử a1, a2,..., an, thuật toán sắp xếp trộn (MergeSort) áp dụng chia đôi mảng A thành hai mảng B và C, sắp xếp B, C và sau đó trộn B và C cho ra mảng A tăng dần. Ví dụ minh họa phương pháp trộn: - Mảng B gồm 4 phần tử b1, b2, b3, b4 đã sắp tăng dần: 1 2 4 6 - Mảng C gồm 4 phần tử c1, c2, c3, c4 đã sắp tăng dần: 3 5 8 9 Nếu trộn hai mảng trên theo dãy thứ tự trộn b1, b2, c1, b3, c2, b4, c3, c4 thì có được mảng sắp là 1 2 3 4 5 6 8 9. Cho một mảng B gồm n phần tử và mảng C gồm m phần tử. Hãy in ra dãy thứ tự trộn sao cho nếu áp dụng dãy thứ tự trộn trên thì mảng kết quả được sắp xếp tăng dần.

Input Format

Dòng đầu tiên là hai số nguyên n, m cách nhau một khoảng trắng là số phần tử của mảng B và mảng C.
Dòng thứ 2 gồm n số nguyên b1, b2,..., bn, mỗi số cách nhau một khoảng trắng.
Dòng thứ 3 gồm m số nguyên c1, c2,..., cm, mỗi số cách nhau một khoảng trắng.
Constraints

1<=n,m<=10^6; 0<=b[i],c[i]<=10^6

Output Format

In ra dãy là thứ tự trộn, trong trường hợp trong 2 mảng b và c có phần tử có cùng giá trị t in ra phần tử ở mảng b trước.

Sample Input 0

5 5
4760 9724 9798 20124 25974 
3397 9166 13054 18273 30455 
Sample Output 0

c1 b1 c2 b2 b3 c3 c4 b4 b5 c5
*/
#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

//==================================
int main ()
{
    FAST_IO;
    int n, m; 
    cin >> n >> m;
    int b[n], c[m];
    for (auto &it : b)
        cin >> it;
    for (auto &it : c)
        cin >> it;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[i] <= c[j])
            cout << 'b' << ++i << ' ';
        else
            cout << 'c' << ++j << ' ';
    }
    while (i < n)
        cout << 'b' << ++i << ' ';
    while (j < m)
        cout << 'c' << ++j << ' ';
    return (0-0);
}
