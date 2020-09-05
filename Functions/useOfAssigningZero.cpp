/*use Of Assigning Integer Variables to Zero*/

#include <iostream>
using namespace std;

int add(int a, int b, int c = 0, int d = 0)
// int add(int a, int b =0, int c, int d) <= it is not allowed, Zero Assigned variables should be at rightmost place
{
    return (a + b + c + d);
}

int main()
{
    cout << add(7, 10);
    cout << add(12, 54, 546);
    cout << add(122, 64, 46, 54);
    return 0;
}