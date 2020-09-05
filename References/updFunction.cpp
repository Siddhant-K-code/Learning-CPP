#include <bits/stdc++.h>
using namespace std;

int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    int &z = fun();
    cout << fun() << " "; // => 10
    z = 30;
    cout << fun(); // => 30
    return 0;
}