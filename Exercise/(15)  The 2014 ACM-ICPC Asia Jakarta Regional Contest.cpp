/*
Phân tích nhóm (phân nhóm, chia nhóm) là công việc phân chia các phần tử trong một tập hợp thành một hoặc nhiều nhóm mà trong đó, các phần tử trong cùng một nhóm sẽ giống nhau hơn so với phần tử thuộc nhóm khác. Cho một tập N số nguyên dương và một số nguyên dương K, nhiệm vụ của bạn là đếm xem có bao nhiêu nhóm. Biết rằng 2 phần tử được xếp chung nhóm với nhau nếu như chênh lệch giữa chúng không vượt quá K. Ví dụ: với tập N = 7 số nguyên dương: 2,6, 1, 7, 3, 4, 9 và K = 1 thì ta sẽ có các mối quan hệ sau: - 2 và 1 chung một nhóm (chênh lệch giữa chúng là 1, không vượt quá K) - 2 và 3 chung một nhóm - 6 và 7 chung một nhóm - 3 và 4 chung một nhóm Vậy ta sẽ có 3 nhóm: {1, 2, 3, 4}, {6, 7} và {9}

Input Format

Dòng đầu chứa 2 số nguyên dương N, K;
Dòng thứ hai chứa N số nguyên dương - các phần tử của tập hợp
Constraints

1<=N<=10^5; 1<=K<=10^6; Các phần tử trong tập hợp là số nguyên có trị tuyệt đối không vượt quá 10^6

Output Format

Kết quả của bài toán

Sample Input 0

7 1
2 6 1 7 3 4 9
Sample Output 0

3
Sample Input 1

8 10
100 200 300 400 500 600 700 800
Sample Output 1

8
*/

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=================================
int main ()
{
    FAST_IO;
    int n,k, cnt = 1;
    cin >> n >> k;
    int a[n];
    for (auto &x:a) cin >> x;
    sort(a,a+n);
    for (int i = 0; i < n-1; i++){
        if (a[i+1] - a[i] > k)
            ++cnt;
    }
    cout << cnt;
    return 0;
}