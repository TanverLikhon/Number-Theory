/*Given a number N. The task is to create an
 alphabetical string in lower case from that
  number and tell whether the string is
  palindrome or not. a = 0, b = 1….. and so on.

For eg: If the number is 61 the substring “gb” will
be printed till 7 (6+1) characters i.e. “gbgbgbg”
and check if palindrome or not.

Note: No number will start with zero. Consider alphabets ‘ a to j ‘ only i.e. single digit numbers from 0 to 9.

Examples:

Input: N = 61
Output: YES
Numbers 6, 1 represent letters ‘g’, ‘b’ respectively.
So the substring is ‘gb’ and the sum is 7(6+1).
Thus the alphabetical string formed is ‘gbgbgbg’,
and is a palindrome.
Input: N = 1998
Output: NO
Numbers 1, 9, 8 represent letters
 ‘b’, ‘j’ and ‘i’ respectively. So the substring is ‘bjji’ and sum
 is 27(1+9+9+8). Thus the alphabetical
 string formed is bjjibjjibjjibjjibjjibjjibjj’, and is not a palindrome.
Approach:

Obtain the substring corresponding to
 given number N and maintain its digit’s sum.
Append the substring till its length becomes
 equal to the sum of digits of N.
Check if the string obtained is Palindrome or not.
If it is a Palindrome, print YES.
Else, print NO.*/
// C++ implementation of the
// above approach
#include<bits/stdc++.h>
using namespace std;

// Function to check if a string
// is palindrome or not
bool isPalindrome(string s)
{
	// String that stores characters
	// of s in reverse order
	string s1 = "";

	// Length of the string s
	int N = s.length();

	for (int i = N - 1; i >= 0; i--)
		s1 += s[i];
	if (s == s1)
		return true;
	return false;
}
bool createString(int N)
{
	string str = "";
	string s = to_string(N);
	// String used to form substring
	// using N
	string letters = "abcdefghij";
	// Variable to store sum
	// of digits of N
	int sum = 0;
	string substr = "";
	// Forming the substring
	// by traversing N
	for (int i = 0; i < s.length(); i++)
	{
		int digit = s[i] - '0';
		substr += letters[digit];
		sum += digit;
	}

	// Appending the substr to str till
	// it's length becomes equal to sum
	while (str.length() <= sum)
	{
		str += substr;
	}
	// Trimming the string str so that
	// it's length becomes equal to sum
	str = str.substr(0, sum);
	return isPalindrome(str);
}

int main()
{
	int N = 61;
	// Calling function isPalindrome to
	// check if str is Palindrome or not
	bool flag = createString(N);
	if (flag)
		cout << "YES";
	else
		cout << "NO";
}
