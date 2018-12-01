///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=230
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///accepted :)
using namespace std;
map<ll,ll>mp;

ll Divisor(ll n)
{
    ll sum=1;

    map<ll,ll>::iterator it;

    while(n%2==0)
    {
        n=n/2;
        mp[2]++;
    }
    for(ll i=3; i<=sqrt(n)+1; i=i+2)
    {
        while(n%i==0)
        {
            n=n/i;
            mp[i]++;
        }
    }
    if(n>2)
        mp[n]++;

    for(it=mp.begin(); it!=mp.end(); it++)
    {

        sum=sum*(it->second+1);
    }
    mp.clear();
    return sum;
}
int main()
{
    ll t;
    sf("%lld",&t);
    while(t--)
    {
        ll l,u,m,m1,maxx=0;
        sf("%lld %lld",&l,&u);
        for(ll i=l; i<=u; i++)
        {
            if(Divisor(i)>maxx)
            {
                maxx=Divisor(i);
                m1=i;
            }
        }
        pf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,m1,maxx);

    }

    return 0;
}

