///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1833
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted :)
map<ll,ll>mp;
ll pairs(ll n)
{
    ll total=1;
    while(n%2==0)
    {
       mp[2]++;
        n=n/2;

    }
    for(ll i=3; i<=sqrt(n)+2; i=i+2)
    {

            while(n%i==0)
            {
              n=n/i;
              mp[i]++;
            }
    }
    if(n>2)mp[n]++;
    map<ll,ll>::iterator it=mp.begin();
    while(it!=mp.end())
    {
        total=total*(2*(it->second)+1);
        it++;
    }
    total=total-total/2;
    mp.clear();
    return total;

}
int main()
{
    ll n;
    while(sf("%lld",&n)&&n!=0)
    {
        pf("%lld %lld\n",n,pairs(n));
    }

    return 0;
}

