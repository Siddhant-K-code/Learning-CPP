#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};
int main()
{
    Student s = {101, "Siddhant", "xyz"};
    cout << s.rollNo << " " << s.name << " " << s.address;
    return 0;
}
