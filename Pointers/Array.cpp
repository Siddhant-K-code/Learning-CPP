#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {56, 65, 23, 465, 31};
    int *ptr = arr;              // we can't do &arr with arrays
    cout << *(ptr + 2) << endl;  // => 23
    cout << *(&ptr + 2) << endl; // => Memory Address
    cout << ptr[2];              // => 23
    return 0;
}