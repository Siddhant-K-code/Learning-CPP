#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "Siddhant";
    /*char str1[] = {'s', 'i', 'd'};*/ // it will merge the alphabets but will give some additional alphabets or words as garbage value. to avoid =>
    char str1[] = {'s', 'i', 'd', '\0'}; // add \0 in end to avoid those garbage value
    cout << str << endl;         // printing string
    cout << sizeof(str) << endl; // sizeof string
    cout << str1 << endl;        // printing string
    cout << sizeof(str1);        // sizeof string
    return 0;
}

