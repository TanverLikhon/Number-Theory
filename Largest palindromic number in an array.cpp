/*Given an array of non-negative integers arr[].
The task is to find the largest number in the array
 which is palindrome. If no such number exits then print -1.
Examples:
Input: arr[] = {1, 232, 54545, 999991};
Output: 54545
Input: arr[] = {1, 2, 3, 4, 5, 50};
Output: 5
Method 1:
Sort the array in ascending order.
Start traversing the array from the end.
The first number which is a palindrome is the required answer.
If no palindromic number is found then print -1
Below is the implementation of the above approach:*/
// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if n is palindrome
bool isPalindrome(int n)
{
	// Find the appropriate divisor
	// to extract the leading digit
	int divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;

	while (n != 0) {
		int leading = n / divisor;
		int trailing = n % 10;

		// If first and last digits are
		// not same then return false
		if (leading != trailing)
			return false;

		// Removing the leading and trailing
		// digits from the number
		n = (n % divisor) / 10;

		// Reducing divisor by a factor
		// of 2 as 2 digits are dropped
		divisor = divisor / 100;
	}
	return true;
}

// Function to find the largest palindromic number
int largestPalindrome(int A[], int n)
{

	// Sort the array
	sort(A, A + n);

	for (int i = n - 1; i >= 0; --i) {

		// If number is palindrome
		if (isPalindrome(A[i]))
			return A[i];
	}

	// If no palindromic number found
	return -1;
}

// Driver program
int main()
{
	int A[] = { 1, 232, 54545, 999991 };
	int n = sizeof(A) / sizeof(A[0]);

	// print required answer
	cout << largestPalindrome(A, n);

	return 0;
}
/*Method 2:

Set a variable currentMax = -1 and start traversing the array.
If current element arr[i] > currentMax and arr[i] is a palindrome.
Then set currentMax = arr[i].
Print currentMax in the end.
Below is the implementation of the above approach:
// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if n is palindrome
bool isPalindrome(int n)
{
	// Find the appropriate divisor
	// to extract the leading digit
	int divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;

	while (n != 0) {
		int leading = n / divisor;
		int trailing = n % 10;

		// If first and last digits are
		// not same then return false
		if (leading != trailing)
			return false;

		// Removing the leading and trailing
		// digits from the number
		n = (n % divisor) / 10;

		// Reducing divisor by a factor
		// of 2 as 2 digits are dropped
		divisor = divisor / 100;
	}
	return true;
}

// Function to find the largest palindromic number
int largestPalindrome(int A[], int n)
{
	int currentMax = -1;

	for (int i = 0; i < n; i++) {

		// If a palindrome larger than the currentMax is found
		if (A[i] > currentMax && isPalindrome(A[i]))
			currentMax = A[i];
	}

	// Return the largest palindromic number from the array
	return currentMax;
}

// Driver program
int main()
{
	int A[] = { 1, 232, 54545, 999991 };
	int n = sizeof(A) / sizeof(A[0]);

	// print required answer
	cout << largestPalindrome(A, n);

	return 0;
}
*/
