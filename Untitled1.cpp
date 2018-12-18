#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define pb push_back
#define nl printf("\n")

int binomial(int n,int k)
{
    double res=1;
    if(k>n-k)
        k=n-k;
    for(int i=0; i<k; i++)
    {
        res=res+log10(n-i)-log10(i+1);
    }
    return  int(res);
}
int main()
{
    int n,k;
    while(sf("%d%d",&n,&k)!=EOF)
    {
        pf("%d\n",binomial(n,k));
    }

    return 0;
}


