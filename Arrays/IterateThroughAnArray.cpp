#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};             // empty [] , but sizeof executes the size of array.
    int n = sizeof(arr) / sizeof(arr[0]); // => 3

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}