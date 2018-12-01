#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///accepted
void factorize(ll n)
{
    ll m=n;
    vector<int >factor;
bool ck=false;
if(n<0)ck=true;
    n=abs(n);

    while(n%2==0)
    {
        factor.pb(2);
        n=n/2;
    }

    for(ll i=3; i<=sqrt(n)+1; i=i+2)
    {
        while(n%i==0)
        {
            factor.pb(i);
            n=n/i;
        }

    }

    if(n>2)
        factor.pb(n);
    int x=factor.size();

    if(ck==true)
    {
        pf("%lld = -1",m);

        for(int i=0; i<x; i++)
        {
            pf(" x %d",factor[i]);
        }
        pf("\n");
    }
    else
    {
        if(x==1)
        {
            pf("%lld = %lld\n",m,m);
        }
        else
        {
            pf("%lld =",m);

            for(int i=0; i<x-1; i++)
            {
                pf(" %d x",factor[i]);
            }
            pf(" %d\n",factor[x-1]);
        }

    }

    factor.clear();
}


int main()
{
    ll n;
    while(cin>>n&&n!=0)
    {
        factorize(n);

    }

    return 0;
}

