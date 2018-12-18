///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=934
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted at 0.00 sec :)
ll smallest(ll n)
{
    if(n>=0&&n<=9)
        return n;
    stack<int >digit;
    for(int i=9;i>=2&&n>1;i--)
    {
        while(n%i==0)
        {
            digit.push(i);
            n=n/i;
        }
    }
    if(n!=1)return -1;
    ll k=0;
    while(!digit.empty())
    {
        k=k*10+digit.top();
        digit.pop();
    }
    return k;
}
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        ll n;
        sf("%lld",&n);
        pf("%lld\n",smallest(n));
    }


return 0;
}
