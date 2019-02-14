/*Find the smallest palindrome number which is
prime too and greater then given number N.

Examples:

Input : N = 7
Output :11
11 is the smallest palindrome prime which
is greater than N.

Input : N = 112
Output : 131
A simple approach is to start a loop from N+1.
For every number, check if it is palindrome and prime.

An efficient solution is based on below observations.
 All palindrome with even digits is multiple of 11.
We can prove as follow:
11 % 11 = 0
1111 % 11 = 0
111111 % 11 = 0
11111111 % 11 = 0

So:
1001 % 11 = (1111 – 11 * 10) % 11 = 0
100001 % 11 = (111111 – 1111 * 10) % 11 = 0
10000001 % 11 = (11111111 – 111111 * 10) % 11 = 0
For any palindrome with even digits:
abcddcba % 11
= (a * 10000001 + b * 100001 * 10 + c * 1001 * 100 + d * 11 * 1000) % 11
= 0

All palindrome with even digits is multiple of 11.
So among them, 11 is the only one prime
if (8 <= N <= 11) return 11
For other, we consider only palindrome with odd digits.*/
// CPP program to find next palindromic
// prime for a given number.
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int num)
{
	if (num < 2 || num % 2 == 0)
		return num == 2;
	for (int i = 3; i * i <= num; i += 2)
		if (num % i == 0)
			return false;
	return true;
}

int primePalindrome(int N)
{
	// if(8<=N<=11) return 11
	if (8 <= N && N <= 11)
		return 11;

	// generate odd length palindrome number
	// which will cover given constraint.
	for (int x = 1; x < 100000; ++x) {

		string s = to_string(x), r(s.rbegin(), s.rend());
		int y = stoi(s + r.substr(1));

		// if y>=N and it is a prime number
		// then return it.
		if (y >= N && isPrime(y))
			return y;
	}

	return -1;
}

// Driver code
int main()
{
	cout << primePalindrome(112);
	return 0;
}
//tanver ahmed likhon
