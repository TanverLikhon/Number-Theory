///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1348
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
vector<ll>vec;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll findGcd()
{
    ll result = vec[0];
    ll n=vec.size();
    for (ll i = 1; i < n; i++)
        result = gcd(vec[i], result);

    return result;
}
int main()
{
    ll n,x;
    while(sf("%lld",&n)&&n!=0)
    {
        ll maxx=1;
        ll m=n;
        while(sf("%lld",&x)&&x!=0)
        {
            vec.pb(abs(m-x));
            m=x;
        }
        pf("%lld\n",findGcd());
      //  cout<<findGcd()<<endl;
     /*   for(int i=0;i<vec.size();i++)
            cout<<vec[i]<< "    ";*/
        vec.clear();
    }


    return 0;
}
