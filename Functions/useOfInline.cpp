/* use of Inline function*/
#include <iostream>
using namespace std;

inline int square(int x)
{
    return (x * x);
}

int main()
{

    cout << square(7);
    return 0;
}