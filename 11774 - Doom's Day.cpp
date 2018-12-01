#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///wa
int main()
{
    int t;
    sf("%d",&t);
    int i=1;
    while(t--)
    {
        ll x,y;
        sf("%lld%lld",&x,&y);
        if(x==y)
            pf("Case %d: 2\n",i);

        pf("Case %d: %lld\n",i,x+y);
        i++;
    }

    return 0;
}

