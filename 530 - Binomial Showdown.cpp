///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=715&problem=471&mosmsg=Submission+received+with+ID+22452920
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted at 0.00 :)
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
    if(n==0&&k==0)break;cout<<binomial(n,k)<<endl;
    //else pf("%lld\n",binomial(n,k));
}

return 0;
}


