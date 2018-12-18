#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

using namespace std;

int power(int n,int k)
{
    int ck=0;
    while(n>0)
    {
        ck=ck+n/k;
        n=n/k;
    }
    return ck;
}

vector<pair<int,int>>ans;
void primeFactor(int k)
{
    int ck=0;
    while(k%2==0)
    {
        ck++;
        k=k/2;
    }
    if(ck)
        ans.pb(make_pair(2,ck));
    for(int i=3; i<=sqrt(k)+1; i=i+2)
        if(k%i==0)
        {
            ck=0;
            while(k%i==0)
            {
                ck++;
                k=k/i;
            }
            if(ck)
                ans.pb(make_pair(i,ck));
        }
    if(k>2)
        ans.pb(make_pair(k,1));
}
int main()
{

    int n,m;
    while(sf("%d%d",&n,&m)!=EOF)
    {
        primeFactor(m);
        bool flag=false;
for(int i=0;i<ans.size();i++)
{
    int x;
    x=power(n,ans[i].first);
    if(x<ans[i].second)
    {
        flag=true;
        break;
    }

}
        if(flag==true)
            pf("%d does not divide %d!\n",m,n);
        else
            pf("%d divides %d!\n",m,n);
        ans.clear();
    }
    return 0;
}



