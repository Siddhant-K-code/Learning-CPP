#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    cout << *ptr << endl; // => 10
    x = x + 30;
    cout << *ptr << endl; // => 40
    cout << ptr << endl;  //=> Memory Address of x
    *ptr = *ptr + 40;
    cout << x << endl; // => 80
    return 0;
}