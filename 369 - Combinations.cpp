#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted at 0.00 sec :)
ll binomial(int n,int k)
{
    ll res=1;
    if(k>n-k)k=n-k;
    for(int i=0;i<k;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
   return  res;
}
int main()
{
int n,k;
while(sf("%d%d",&n,&k))
{
    if(n==0&&k==0)break;
    else pf("%d things taken %d at a time is %lld exactly.\n",n,k,binomial(n,k));
}

return 0;
}

