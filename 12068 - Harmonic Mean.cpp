///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=721&page=show_problem&problem=3220
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///accepted :)
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
ll lcm(ll a[], ll n)
{
    ll res = 1, i;
    for (i = 0; i < n; i++)
    {
        res = res*a[i]/gcd(res, a[i]);
    }
    return res;
}

int main()
{
    int t;
    sf("%d",&t);


    for(int i=1; i<=t; i++)
    {
            ll m,n1=0;
        int n;
sf("%d",&n);
        ll arr[n];
        for(int j=0; j<n; j++)
        {
            sf("%lld",&arr[j]);

        }
        ll lc=lcm(arr,n);
        m=n*lc;
        for(int j=0; j<n; j++)
        {
            n1=n1+lc/arr[j];
        }

        ll gc=gcd(m,n1);
        // cout<<gc<<endl;
pf("Case %d: ",i);
        pf("%lld/%lld\n",m/gc,n1/gc);
    }

    return 0;
}

