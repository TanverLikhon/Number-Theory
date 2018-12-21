// C++ program to compute mod of a big number represented
// as string
#include<iostream>
using namespace std;
// Function to compute num (mod a)
long long mod(string num, long long a)
{
	// Initialize result
long long res = 0;

	// One by one process all digits of 'num'
	for (int i = 0; i < num.length(); i++)
		res = (res*10 + (int)num[i] - '0') %a;
	return res;
}
// Driver program
int main()
{
	string num = "1010101";
	cout << mod(num, 131071);
	return 0;
}
///TANVER AHMED LIKHON
