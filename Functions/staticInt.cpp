/* use of static int => it updates the value by the end of every processing*/

#include <iostream>
using namespace std;
void stat()
{
    static int x = 10;
    x++;
    cout << x << endl;
}

int main()
{
    stat(); // x = 10
    stat(); // x = 11
    stat(); // x = 12

    return 0;
}