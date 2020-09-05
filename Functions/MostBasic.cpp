/* Most Basic Code of Calling a Function */

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}

int main()
{
    int a = 10, b = 20;
    int result = add(a, b);

    cout << result;
    return 0;
}