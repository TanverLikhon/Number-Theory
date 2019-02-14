// C++ implementation of the
// above approach
#include <bits/stdc++.h>
using namespace std;

// check if a number is a palindrome
bool ispalindrome(int x)
{
	int ans = 0;
	int temp = x;
	while (temp > 0)
	{
		ans = 10 * ans + temp % 10;
		temp = temp / 10;
	}
	return ans == x;
}

// Function to return required count
// of palindromes
int SuperPalindromes(int L, int R)
{
	// Range [L, R]

	// Upper limit
	int LIMIT = 100000;

	int ans = 0;

	// count odd length palindromes
	for (int i = 0 ;i < LIMIT; i++)
	{
		string s = to_string(i); // if s = '1234'

		string rs = s.substr(0, s.size() - 1);
		reverse(rs.begin(), rs.end());

		// then, t = '1234321'
		string p = s + rs;
		int p_sq	 = pow(stoi(p), 2);
		if (p_sq > R)
			break;
		if (p_sq >= L and ispalindrome(p_sq))
			ans = ans + 1;
	}

	// count even length palindromes
	for (int i = 0 ;i < LIMIT; i++)
	{
		string s = to_string(i); // if s = '1234'

		string rs = s;
		reverse(rs.begin(), rs.end());
		string p = s + rs; // then, t = '12344321'
		int p_sq = pow(stoi(p), 2);
		if (p_sq > R)
			break;
		if (p_sq >= L and ispalindrome(p_sq))
			ans = ans + 1;
	}

	// Return count of super-palindromes
	return ans;
}

// Driver Code
int main()
{
	string L = "4";
	string R = "1000";

	// function call to get required answer
	printf("%d\n", SuperPalindromes(stoi(L),
								stoi(R)));
	return 0;
}

// This code is contributed
// by Harshit Saini

