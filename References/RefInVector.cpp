#include <bits/stdc++.h>
using namespace std;

void Print(vector<int> &v)
{
    for (auto x : v)
    {
        cout << x << endl;
    }
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 1000; i++)
        v.push_back(i);

    Print(v);
    return 0;
}