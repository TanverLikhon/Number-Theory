#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define  MAX 100000001
//vector<int>pm;
bool prime[MAX];
void SieveOfEratosthenes()
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for (ll p=2; p*p<=MAX; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p; i<=MAX; i += p)
                prime[i] = false;
        }
    }
    //  for(ll i=2; i<=MAX; i++)
    //      if(prime[i])
    //          pm.pb(i);
}
int main()
{
    ll n;
    SieveOfEratosthenes();
    while(sf("%lld",&n)&n!=0)
    {
        ll x,y;
        int flag=false;
        if(n%2!=0)
        {
            x=2;
            if(prime[n-2]==true)
            {
                pf("%lld is the sum of %lld and %lld.\n",n,x,n-x);
            }
            else
                pf("%lld is not the sum of two primes!\n",n);

        }
        else
        {
            for(ll i=n/2; i<n; i++)
            {
                if(prime[i]==true&&prime[n-i]==true)
                {
                    pf("%lld is the sum of %lld and %lld.\n",n,n-i,i);
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
