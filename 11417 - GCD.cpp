///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2412
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}


int main()
{
         int n;

    while(sf("%d",&n)&&n!=0)
    {
        ll g=0;

      // sf("%d",&n);
       for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        g+=gcd(i,j);

       pf("%lld\n",g);
    }

return 0;
}

