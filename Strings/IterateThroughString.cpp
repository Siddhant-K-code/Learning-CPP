#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Siddhant";
    /*int n = sizeof(str) / sizeof(str[0]);*/ // it will iterate but with garbage
    for (int i = 0; i < str.length(); i++)
        cout << str[i];
    /* cout << endl;
    for (char x : str)
    {
        cout << x;
    } */

    return 0;
}