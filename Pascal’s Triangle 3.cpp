/*Method 3 ( O(n^2) time and O(1) extra space )
This method is based on method 1. We know that ith entry in a line number
line is Binomial Coefficient C(line, i) and all lines start with value 1.
The idea is to calculate C(line, i) using C(line, i-1).
It can be calculated in O(1) time using the following.

C(line, i)   = line! / ( (line-i)! * i! )
C(line, i-1) = line! / ( (line - i + 1)! * (i-1)! )
We can derive following expression from above two expressions.
C(line, i) = C(line, i-1) * (line - i + 1) / i

So C(line, i) can be calculated from C(line, i-1) in O(1) time
*/
// C program for Pascal’s Triangle
// A O(n^2) time and O(1) extra space
#include<bits/stdc++.h>
using namespace std;
void printPascal(int n)
{
for (int line = 1; line <= n; line++)
{
	int C = 1; // used to represent C(line, i)
	for (int i = 1; i <= line; i++)
	{
	printf("%d ", C); // The first value in a line is always 1
	C = C * (line - i) / i;
	}
	printf("\n");
}
}
// Driver code
int main()
{
int n = 5;
	printPascal(n);
	return 0;
}

///tanverlikhon@gmail.com
