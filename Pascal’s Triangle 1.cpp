/*Method 1 ( O(n^3) time complexity )
Number of entries in every line is equal to line number.
For example, the first line has “1”, the second line has “1 1”,
the third line has “1 2 1”,.. and so on.
Every entry in a line is value of a Binomial Coefficient.
The value of ith entry in line number line is C(line, i).
The value can be calculated using following formula.

C(line, i)   = line! / ( (line-i)! * i! )

A simple method is to run two loops and calculate the value of
 Binomial Coefficient in inner loop.*/
// C++ code for Pascal's Triangle
#include <stdio.h>
int binomialCoeff(int n, int k);
void printPascal(int n)
{
	// Iterate through every line and
	// print entries in it
	for (int line = 0; line < n; line++)
	{
		// Every line has number of
		// integers equal to line
		// number
		for (int i = 0; i <= line; i++)
			printf("%d ",
					binomialCoeff(line, i));
		printf("\n");
	}
}
int binomialCoeff(int n, int k)
{
	int res = 1;
	if (k > n - k)
	k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}
int main()
{
	int n = 7;
	printPascal(n);
	return 0;
}///tanverlikhon@gmail.com
