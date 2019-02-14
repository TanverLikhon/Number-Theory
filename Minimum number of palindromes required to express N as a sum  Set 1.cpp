/*Given a number N, we have to find the minimum
number of palindromes required to express N as a sum of them.

Examples:

Input: N = 11
Output: 1
11 is itself a palindrome.

Input: N = 65
Output: 3
65 can be expressed as a sum of three palindromes (55, 9, 1).
Recommended: Please try your approach on
{IDE} first, before moving on to the solution.

Approach:
We can use Dynamic Programming to solve this problem.
 The idea is to first generate all the palindromes up to N i
 n a sorted fashion, and then we can treat this problem
 as a variation of the subset sum problem, where we
 have to find the size of the smallest subset such
 that its sum is N.

Below is the implementation of above approach:*/
// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;
// Declaring the DP table as global variable
vector<vector<long long> > dp;
// A utility for creating palindrome
int createPalindrome(int input, bool isOdd)
{
	int n = input;
	int palin = input;
	// checks if number of digits is odd or even
	// if odd then neglect the last digit of input in
	// finding reverse as in case of odd number of
	// digits middle element occur once
	if (isOdd) n /= 10;
	// Creates palindrome by just appending revers
	// of number to itself
	while (n > 0) {
		palin = palin * 10 + (n % 10);
		n /= 10;
	}
	return palin;
}
// Function to generate palindromes
vector<int> generatePalindromes(int N)
{
	vector<int> palindromes;
	int number;
	// Run two times for odd and even length palindromes
	for (int j = 0; j < 2; j++) {
		// Creates palindrome numbers with first half as i.
		// Value of j decides whether we need an odd length
		// or even length palindrome.
		int i = 1;
		while ((number = createPalindrome(i++, j)) <= N)
			palindromes.push_back(number);
	}
	return palindromes;
}
// Function to find the minimum
// number of elements in a sorted
// array A[i..j] such that their sum is N
long long minimumSubsetSize(vector<int>& A, int i, int j, int N)
{
	if (!N) 		return 0;
	if (i > j || A[i] > N) 		return INT_MAX;
	if (dp[i][N]) return dp[i][N];
dp[i][N] = min(1 + minimumSubsetSize(A, i + 1, j,N - A[i]),
minimumSubsetSize(A, i + 1, j, N));
	return dp[i][N];
}
// Function to find the minimum
// number of palindromes that N
// can be expressed as a sum of
int minimumNoOfPalindromes(int N)
{
	// Getting the list of all palindromes upto N
	vector<int> palindromes = generatePalindromes(N);
	// Sorting the list of palindromes
	sort(palindromes.begin(), palindromes.end());
	// Initializing the DP table
	dp = vector<vector<long long> >(palindromes.size(),
									vector<long long>(N + 1, 0));
	// Returning the required value
	return minimumSubsetSize(palindromes, 0,
							palindromes.size() - 1, N);
}
// Driver code
int main()
{
	int N = 65;
	cout << minimumNoOfPalindromes(N);
	return 0;
}
