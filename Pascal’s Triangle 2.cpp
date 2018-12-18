/*Method 2( O(n^2) time and O(n^2) extra space )
If we take a closer at the triangle,
we observe that every entry is sum of the two values above it.
So we can create a 2D array that stores previously generated values.
To generate a value in a line,
 we can use the previously stored values from array. */

// C program for Pascal’s Triangle
// A O(n^2) time and O(n^2) extra space
// method for Pascal's Triangle
#include<bits/stdc++.h>
using namespace std;
void printPascal(int n)
{
// An auxiliary array to store
// generated pscal triangle values
    int arr[n][n];

// Iterate through every line and print integer(s) in it
    for (int line = 0; line < n; line++)
    {
        // Every line has number of integers
        // equal to line number
        for (int i = 0; i <= line; i++)
        {
            // First and last values in every row are 1
            if (line == i || i == 0)
                arr[line][i] = 1;
            // Other values are sum of values just
            // above and left of above
            else
                arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
            printf("%d ", arr[line][i]);
        }
        printf("\n");
    }
}
int main()
{
    int n = 5;
    printPascal(n);
    return 0;
}
///tanverlikhon@gmail.com
