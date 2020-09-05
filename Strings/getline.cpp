#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter Your Name: "<<endl;
    getline(cin, str, 'a'); // It will stop after it find the 'a' in a given string
    cout << "Your Name is: " << str;
    return 0;
}