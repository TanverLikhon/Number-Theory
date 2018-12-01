#include<bits/stdc++.h>
///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2383
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted and new thing learned :)
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        ll l,g;
        sf("%lld%lld",&g,&l);
        if(l%g!=0)
            pf("-1\n");
        else
            pf("%lld %lld\n",g,l);

    }

    return 0;
}

