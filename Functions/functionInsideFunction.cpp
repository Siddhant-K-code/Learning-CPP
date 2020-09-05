/* Function Inside Function => It Works*/

#include <iostream>
using namespace std;

void fun(int x)
{
    if (x == 0)
        return;
    else
    {
        cout << "Siddhant" << endl;
        fun(x - 1); // it decreases the value of fun(5) by -1 and loops will get to start until fun(5) becomes fun(0)
    }
}

int main()
{
    fun(5);
    return 0;
}