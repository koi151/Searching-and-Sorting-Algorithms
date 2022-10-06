/*
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^3; 0<=A[i]<=10^9

Output Format

In ra các bước của thuật toán sắp xếp chọn

Sample Input 0

4
5 7 3 2
Sample Output 0

Buoc 1: 2 7 3 5
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
*/

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

void SelectionSort(int a[],int n){
    int min;
    for ( int i = 0; i < n-1; i ++){
        min = i;
        for ( int j = i+1; j < n; j++){
            if (a[j] < a[min])
                min = j;
        }
    
    swap(a[i],a[min]);
    cout << "Buoc " << i+1 << ": ";
    for (int j = 0; j < n; j++)
        cout << a[j] << ' ';
    cout << '\n';
    }
}



//================================
int main (){
    FAST_IO;
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    SelectionSort(a,n);
    return 0;
}


