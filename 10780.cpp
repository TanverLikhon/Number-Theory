#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")

int findingPowerOfK(int n,int k)
{
    int res=0;
    while(n>0)
    {
        res=res+n/k;
        n=n/k;
    }
    return res;
}
vector<pair<int,int>>primeFactorsofK(int k)
{
    vector<pair<int,int>>ans;
    for(int i=2;k!=1;i++)
    {
        if(k%i==0)
        {
            int count=0;
            while(k%i==0)
            {
                k=k/i;
                count++;
            }
            ans.pb(make_pair(i,count));
        }
    }
    return ans;
}
int largestPowerOfK(int n,int k)
{
    vector<pair<int,int>>vec;
    vec=primeFactorsofK(k);
    int ans=INT_MAX;
    for(int i=0;i<vec.size();i++)
        ans=min(ans,findingPowerOfK(n,vec[i].first)/vec[i].second);
    return ans;
}
int main()
{

int t;
sf("%d",&t);
int i=1;
while(t--)
{
    int m,n;
    sf("%d %d",&m,&n);
    int ans=largestPowerOfK(n,m);
    if(ans>0)
    pf("Case %d:\n%d\n",i,ans);
    else
        pf("Impossible to divide\n");
    i++;
}

return 0;
}

