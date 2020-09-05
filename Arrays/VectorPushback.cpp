/* Use of Vector and <vectorname>.push_back(); */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    /* Basic Approach */
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    /* Modern Approach */

    for (auto x : v)
    {
        cout << x << endl;
    }

    return 0;
}