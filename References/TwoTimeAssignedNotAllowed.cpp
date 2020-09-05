#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10, z = 20;
    int &y = x;
    y = z; // after assigning it from &y=x then we can't assign it later on to z
    y = y + 5;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}