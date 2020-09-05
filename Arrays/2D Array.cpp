#include <bits/stdc++.h>
using namespace std;

int main()
{

    // i x j vector,
    int arr[3][2] = {{10, 20},
                     {30, 40},
                     {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << arr[i][j] << endl;
    }

    return 0;
}