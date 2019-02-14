/*Given a number N, we have to find the minimum
 number of palindromes required to express N as a sum of them.
Examples:

Input : N = 11
Output : 1
Explanation: 11 is itself a palindrome.

Input : N = 65
Output : 3
Explanation: 65 can be expressed as
 a sum of three palindromes (55, 9, 1).
In the previous post, we discussed a dynamic programming
approach to this problem which had a time and space
complexity of O(N3/2).
Cilleruelo, Luca, and Baxter proved in a 2016 research
 paper that every number can be expressed as the sum
  of maximum three palindromes in any base b >= 5
  (this lower bound was later improved to 3).
  For the proof of this theorem, please refer to the original paper.
  We can make the use of this theorem by safely assuming the
   answer to be three if the number N is not itself a palindrome
   and cannot be expressed as the sum of two palindromes.

Below is the implementation of the above approach:*/
// C++ program to find the minimum number of
// palindromes required to express N as a sum
#include <bits/stdc++.h>
using namespace std;
// A utility for creating palindrome
int createPalindrome(int input, bool isOdd)
{
	int n = input;
	int palin = input;
	// checks if number of digits is odd or even
	// if odd then neglect the last digit of input in
	// finding reverse as in case of odd number of
	// digits middle element occur once
	if (isOdd) 		n /= 10;
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
	// Run two times for odd and even
	// length palindromes
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
// number of palindromes required
// to express N as a sum
int minimumNoOfPalindromes(int N)
{
	// Checking if the number is a palindrome
	string a, b = a = to_string(N);
	reverse(b.begin(), b.end());
	if (a == b)
		return 1;
	// Checking if the number is a
	// sum of two palindromes
	// Getting the list of all palindromes upto N
	vector<int> palindromes = generatePalindromes(N);
	// Sorting the list of palindromes
	sort(palindromes.begin(), palindromes.end());
	int l = 0, r = palindromes.size() - 1;
	while (l < r) {
		if (palindromes[l] + palindromes[r] == N)
			return 2;
		else if (palindromes[l] + palindromes[r] < N)
			++l;
		else
			--r;
	}
	// The answer is three if the
	// control reaches till this point
	return 3;
}
int main()
{
	int N = 65;
	cout << minimumNoOfPalindromes(N);
	return 0;
}
