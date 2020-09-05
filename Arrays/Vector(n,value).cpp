#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 10;
    vector<int> v(n, 5); // => 5 5 5 5 5 5 5 5 5 5

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}