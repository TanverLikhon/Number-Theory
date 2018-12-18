// C++ program to find LCM of First N Natural Numbers.
#include <bits/stdc++.h>
#define MAX 100000
#define pb push_back
using namespace std;
// array to store all prime less than and equal to 10^6
vector <int> primes;
// utility function for sieve of sieve of Eratosthenes
void sieve()
{
    bool prime[MAX];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=MAX; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=MAX; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=MAX; p++)
        if (prime[p])
            primes.pb(p);
}
// Function to find LCM of first n Natural Numbers
long long LCM(int n)
{
	long long lcm = 1;
	for (int i=0; i<primes.size() && primes[i]<=n; i++)
	{
		// Find the highest power of prime, primes[i]
		// that is less than or equal to n
		int pp = primes[i];
		while (pp*primes[i] <= n)
			pp = pp *primes[i];
		// multiply lcm with highest power of prime[i]
		lcm *= pp;
		lcm %= 1000000007;
	}
	return lcm;
}

int main()
{
	sieve();
	int N;
while(cin>>N){
    	cout << LCM(N)<<endl;
}

	return 0;
}
