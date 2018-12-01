#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 32000
vector<int>primes;
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
void  segSieve(ll l,ll r)
{
    bool isPrime[r-l+1];
    memset(isPrime,true,sizeof(isPrime));
    if(l==1)
        isPrime[0]=false;
    for(int i=0; primes[i]*primes[i]<=r; ++i)
    {

        int currentPrime=primes[i];
        ll base=(l/currentPrime)*currentPrime;
        if(base<l)
            base=base+currentPrime;
        for(ll j=base; j<=r; j=j+currentPrime)
        {
            isPrime[j-l]=false;
        }
        if(base==currentPrime)
            isPrime[base-l]=true;
    }
    for(int i=0; i<r-l+1; i++)
    {
        if(isPrime[i])
            cout<<(i+l)<<endl;
    }
}
int main()
{
    SieveOfEratosthenes();
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        segSieve(l,r);
        cout<<endl;
    }
}
