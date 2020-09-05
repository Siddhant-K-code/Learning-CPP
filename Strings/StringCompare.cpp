#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "bcd";
    char s2[] = "abc";
    int res = strcmp(s1, s2);
    if (res > 0)
        cout << "String 1 is Greater";
    else if (res == 0)
        cout << "String 1 and String 2 are Same";
    else
        cout << "String 2 is Smaller";
}