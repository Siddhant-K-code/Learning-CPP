#include <bits/stdc++.h>
using namespace std;

/* Logical Operator Runs from Right to left*/

/*Print statement runs from left to right*/

// ++*p1 => ++(*p1) => ++(10) => 11

/* 
int main()
{
    int arr[] = {10, 20};
    int *p1 = arr;
    ++*p1;                                         // => 11
    cout << arr[0] << " " << arr[1] << " " << *p1; // => 10 20 11
    return 0;
} 

*/

// *p2++ => *(p2++) => *(2) === {next array} => 20

/*
int main()
{
    int arr[] = {10, 20};
    int *p2 = arr;
    *p2++;                                         // => 20
    cout << arr[0] << " " << arr[1] << " " << *p2; // => 10 20 20
    return 0;
}
*/

/* print statement as *p2++*/

// cout << *p2++ << " "; => 10 ; postfix operator, it will print the 10 and then executes ++, so later print will get 20

/*
int main()
{
    int arr[] = {10, 20};
    int *p2 = arr;
    cout << *p2++ << " ";                          // => 10 ; it will print the 10 and then executes ++, so later print will get 20
    cout << arr[0] << " " << arr[1] << " " << *p2; // => 10 20 20
    return 0;
}

*/

// *++p3 => *(++p3) => *(nextArray)=> 20

/* 
int main()
{
    int arr[] = {10, 20};
    int *p3 = arr;
    *++p3;
    cout << arr[0] << " " << arr[1] << " " << *p3; // =>10 20 20
    return 0;
} 
*/

/* Print Statement of *++p3 */
//cout << *++p3 << " ";                          // => 20, it is prefix operator so, it will update here and later also.

/* 
int main()
{
    int arr[] = {10, 20};
    int *p3 = arr;
    cout << *++p3 << " ";                          // => 20, it is prefix operator so, it will update here and later also.
    cout << arr[0] << " " << arr[1] << " " << *p3; // => 10  20 20
    return 0;
} 
*/