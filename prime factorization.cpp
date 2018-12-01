///not correct

#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define MAX 32000
vector<int>primes;
int factlist[10000];
void SieveOfEratosthenes()
{
    bool prime[MAX];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=MAX; p++)
    {

        if (prime[p] == true)
        {
            for (int i=p*2; i<=MAX; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=MAX; p++)
        if (prime[p])
            primes.push_back(p);
}
void PrimeFactorization(ll n)
{

    int factlistsize=0;

    int sqrtn=int (sqrt(n))+1;
    for(int i=0; primes[i]<=sqrtn; i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                factlist[factlistsize]=primes[i];
                n=n/primes[i];
                factlistsize++;
            }
        }

    }
    if(n>1)
        factlist[factlistsize]=n;
    for(int i=0; i<factlistsize; i++)
    {
        cout<<factlist[i]<<" ";
    }
}
int main()
{
    ll n;
    SieveOfEratosthenes();
    while(cin>>n&&n!=0){
            PrimeFactorization(n);

    }

    return 0;
}
