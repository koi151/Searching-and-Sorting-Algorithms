/*
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chèn

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^3; 0<=A[i]<=10^9

Output Format

In ra các bước của thuật toán sắp xếp chèn

Sample Input 0

7
56 73 15 64 86 61 50 
Sample Output 0

Buoc 1: 56 73 15 64 86 61 50 
Buoc 2: 15 56 73 64 86 61 50 
Buoc 3: 15 56 64 73 86 61 50 
Buoc 4: 15 56 64 73 86 61 50 
Buoc 5: 15 56 61 64 73 86 50 
Buoc 6: 15 50 56 61 64 73 86 
*/

#include <iostream>
#include <algorithm>

using namespace std;

void Selection_Sort(int a[], int n)
{
    int minpos = 0;
    for (int i = 0; i < n-1; i++)
    {
        minpos = i;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[minpos])
                minpos = j;
        swap(a[i], a[minpos]);
        cout << "Buoc " << i+1 << ": ";
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << "\n";
    }
}

void Insertion_Sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = i, x = a[i];
        while (pos > 0 && a[pos-1] > x)
        {
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = x;
        cout << "Buoc " << i << ": ";
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << "\n";
    }
}

int main ()
{
    int n; cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    Insertion_Sort(a, n);
    return (0-0);
}
