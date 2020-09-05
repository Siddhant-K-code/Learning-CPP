#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};             // empty [] , but sizeof executes the size of array.
    cout << sizeof(arr);                  // => size of int(compiler respective) * 3 (in this example)
    cout << sizeof(arr) / sizeof(arr[0]); // => 3
    return 0;
}