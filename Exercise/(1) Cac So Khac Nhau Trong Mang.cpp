// Cho mảng số nguyên gồm N phần tử. Hãy đếm xem mảng có bao nhiêu phần tử riêng biệt

// Input Format

// Dòng đầu tiên là N Dòng thứ 2 là các phần tử trong mảng a1, a2, ... aN

// Constraints

// 1≤n≤2.10^5; 1≤ai≤10^9

// Output Format

// In ra số lượng phần tử riêng biệt trong mảng.

// Sample Input 0

// 10
// 2 2 2 1 3 2 5 1 4 2
// Sample Output 0

// 5
// Explanation 0

// 5 phần tử khác nhau trong mảng là 1, 2, 3, 4, 5

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

int main (){
    FAST_IO;
    int n;
    cin >> n;
    int a[n];
    for (auto &x:a){
        cin >> x;
    }
    sort(a,a+n);
    int c= 1;
    for ( int i = 1; i < n; i ++){
        if ( a[i] != a[i-1]) c++;
    }
    cout << c <<"\n";
    return (0-0);
}