#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define  MAX 100000001
//tle
bool prime[MAX];
void SieveOfEratosthenes()
{
    memset(prime,true,sizeof(prime));
    for (ll p=2; p*p<=MAX; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p; i<=MAX; i += p)
                prime[i] = false;
        }
    }
    //cout<<"sieve entered";
}
int main()
{
    ll n;
    SieveOfEratosthenes();
    while(sf("%lld",&n)&n!=0)
    {

        int flag=false;
        if(n<4||prime[n]==true)
        {
            pf("%lld is not the sum of two primes!\n",n);
        }
        else
        {

            for(ll i=3; i<=n/2; i++)
            {
                if(prime[i]==true&&prime[n-i]==true)
                {
                    pf("%lld is the sum of %lld and %lld.\n",n,i,n-i);
                    flag=true;
                    break;
                }
            }
            if(flag==false)
                pf("%lld is not the sum of two primes!\n",n);
        }

    }
    return 0;
}


