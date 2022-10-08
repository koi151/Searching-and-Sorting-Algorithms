/*
Nam có n viên gạch được đánh số từ 1 đến n. Các viên gạch có độ cứng lần lượt là a1, a2,..., an. Một viên gạch có độ cứng x nghĩa là Nam có thể chồng lên trên viên gạch đó tối đa x viên gạch khác, nếu chồng nhiều hơn thì viên gạch đó bị vỡ. Hỏi Nam có thể sắp được chồng gạch cao nhất là bao nhiêu?

Input Format

Dòng đầu tiên là số nguyên n - là số viên gạch.
Dòng tiếp theo gồm n số nguyên a1, a2,..., an mỗi số cách nhau một khoảng trắng.
Constraints

1<=n<=10^5; 0≤ai≤ 10^6

Output Format

Số nguyên xác định chiều cao cao nhất của chồng gạch mà Nam sắp được.

Sample Input 0

4
1 2 3 4
Sample Output 0

4
*/

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)\

using namespace std;

//===========================
int main(){
    FAST_IO;
    int n;
    cin >> n;
    int a[n];
    for (auto &x:a)
        cin >> x;
    sort(a,a+n,greater<int>());
    int docung = a[0], i = 1, res = 1;
    while (docung >= 1 && i < n){
        ++res;
        docung = min(docung - 1, a[i]);
        ++i;
    }
    cout <<res;
    return 0;
}