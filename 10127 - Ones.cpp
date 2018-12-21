//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1068
#include<bits/stdc++.h>
using namespace std;
#define sf         scanf
#define pf        printf
#define ll          long long
#define ull       unsigned long long
#define pb       push_back
#define v          vector
#define l           list
#define p         pair
#define m        map
#define nl        printf("\n")
///accepted 0.00 sec :)
int digit(ll n)
{
    int ck=1;
    ll sum=1;
    while(sum%n!=0)
    {
        ck++;
        sum=(sum*10+1)%n;
    }
    return ck;
}
int main()
{
    ll n;
    while(sf("%lld",&n)!=EOF)
    {
        pf("%d\n",digit(n));
    }

    return 0;
}


