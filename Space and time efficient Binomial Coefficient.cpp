// Program to calculate C(n ,k)
#include <stdio.h>
#define ll long long
// Returns value of Binomial Coefficient C(n, k)
ll binomialCoeff(int n, int k)
{
	ll res = 1;

	// Since C(n, k) = C(n, n-k)
	if ( k > n - k )
		k = n - k;

	// Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

/* Drier program to test above function*/
int main()
{
	int n = 100, k = 6;
	printf ("Value of C(%d, %d) is %lld ", n, k, binomialCoeff(n, k) );
	return 0;
}

