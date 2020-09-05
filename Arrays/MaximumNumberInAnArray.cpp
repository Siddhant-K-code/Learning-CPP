#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 54, 2335, 23, 315, 2356};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Basic Method:

    /* 
    
    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i]); // max function is for  array
    } 

    */

    // Easy Way -  Without For Loop:

    /*
     int res = *max_element(arr, arr + n);

    
    */

    // Easy Way - Without for loop (vector array):

    vector<int> v{10, 564, 646, 213, 21};

    int res = *max_element(v.begin(), v.end());

    cout << res;

    return 0;
}