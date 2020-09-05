#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 3047, 400, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Basic Method:

    /* 
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    } 
    */

    // Easy Method: (accumulate)

    sum = accumulate(arr, arr + n, sum);

    cout << sum << " ";

    return 0;
}