#include <bits/stdc++.h>
using namespace std;

void fun(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 50, 66, 654, 60};
    fun(arr, 5);
}