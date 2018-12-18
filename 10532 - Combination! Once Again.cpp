#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define pb push_back
#define nl printf("\n")
///unsolved
ll binomial(int n,int k)
{
    ll res=1;
    if(k>n-k)
        k=n-k;
    for(int i=0; i<k; i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return  res;
}
int main()
{
    int n,m;
    while(sf("%d %d",&n,&m)&&n!=0)
    {

    }

    return 0;
}

