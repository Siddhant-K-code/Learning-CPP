#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    cout << *ptr << endl; // => It will print value of x
    cout << ptr << endl;  // => It Will print Memory Address of x
    return 0;
}