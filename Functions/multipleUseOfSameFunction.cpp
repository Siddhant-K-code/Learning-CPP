/* use Of a same function but differs with dataTypes*/

#include <iostream>
using namespace std;

void print(int i) // takes int only
{
    cout << i << endl;
}
void print(string s) // takes string only
{
    cout << s;
}
int main()
{
    print(7);
    print("Siddhant");
    return 0;
}