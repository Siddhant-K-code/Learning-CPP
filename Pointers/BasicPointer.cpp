#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    cout << (&x)<<endl;    // => It Will Print the Memory Address of x
    cout << (*(&x)); // => It will print the value of x
    return 0;
}