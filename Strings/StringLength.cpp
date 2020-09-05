#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Siddhant";
    cout << str.length() << endl; // to find the length of string
    str = str + "xyz";            // add to prev. string
    cout << str << endl;
    cout << str.substr(1, 3) << endl; // print fro 1 to 3
    cout << str.find("han");          // find han in given string
    return 0;
}