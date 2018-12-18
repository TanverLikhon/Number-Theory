///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2005
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted 0.010 sec :)
vector<int>vec;
ll  primeFactors(ll n,int &d)
{

    int ck=0;
    ll res=1;

    while (n%2 == 0)
    {
        ck++;
        n = n/2;
    }
    if(ck)
    {
        d*=(ck+1);
        vec.pb(2);
        res=res*2;
    }

    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        ck=0;
        while (n%i == 0)
        {
            ck++;

            n = n/i;

        }
        if(ck)
        {
            d*=(ck+1);
            vec.pb(i);
            res=res*i;
        }

    }
    if (n > 2)
    {
        d*=2;
        vec.pb(n);
        res*=n;
    }
    return res;
}
int main()
{
    ll n;

    while(sf("%lld",&n)!=EOF)
    {
        if(n==0)
            pf("0\n");
        else
        {
            int d=1;
            int ck=1;
            ll res=   primeFactors(n,d);
            //      cout<<d<<endl;
            for(int i=0; i<vec.size(); i++)
            {
                ck*=(vec[i]-1);
            }

            ll x=(n*ck)/res;
            pf("%lld\n",n-x-d+1);
            vec.clear();
        }

    }
    return 0;
}


