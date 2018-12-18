///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=724&problem=1621&mosmsg=Submission+received+with+ID+22417112
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 1000001
///accepted at 1.42 sec :(
///idea from http://pavelsimo.blogspot.com/2012/06/uva-10680-lcm.html
vector<int>primes;
void sieve()
{
    bool isPrime[MAX];
    memset(isPrime,true,sizeof(isPrime));
    for(int i=2; i*i<=MAX; i++)
        if(isPrime[i]==true)
            for(int j=i*i; j<=MAX; j=j+i)
                isPrime[j]=false;
    for(int i=2; i<=MAX; i++)
        if(isPrime[i])
            primes.pb(i);
}
ll result[1000005];
int main()
{
    sieve();
    ll n,val,sq,ck,ans;
    while(sf("%lld",&n)&&n!=0)
    {
    memset(result,0,sizeof(result));
        result[1]=1;
        ans=1;
        for(ll j=0; j<primes.size()&&primes[j]<=n; j++)
        {
            val=primes[j];
            while(val<=n)
            {
                val=val*primes[j];
            }
            val=val/primes[j];
            result[primes[j]]=val;
        }
        ck=0;
        while(result[5]>1)
        {
            result[5]=result[5]/5;
            ck++;
        }
        for(ll k=ck; k>0; k--)
        {
            result[2]=result[2]/2;
        }
        for(int i=1; i<1000005; i++)
        {
            if(result[i]!=0)
                ans=((ans%10)*(result[i]%10))%10;
        }


        pf("%lld\n",ans);
    }

    return 0;
}
