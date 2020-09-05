/* use of #define */

#include <iostream>
using namespace std;
#define add(x, y) x + y

int main()
{
    int a = 10, b = 20;
    int result = add(a, b);

    cout << result;
    return 0;
}