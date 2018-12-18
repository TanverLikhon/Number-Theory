#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
map<int,int>mp;
int prime[25]= { 2,3, 5,7,11,13, 17,19,23,29,31,37, 41,43,47,53, 59,61, 67, 71,73, 79, 83,89, 97};
void factorsofFactorial(int n)
{
    for(int i=0; i<25&&prime[i]<=n; i++)
    {
        int m=n;
        int ck=0;
        while(m>1)
        {
            ck+=m/prime[i];
            m=m/prime[i];
        }
        if(ck)
            mp[prime[i]]=ck;
    }
}
vector<pair<int,int>>vec;
void primeFactors(int n)
{
    int ck=0;
    while (n%2 == 0)
    {
        ck++;
        n = n/2;
    }
    if(ck)
        vec.pb(make_pair(2,ck));
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        int ck=0;
        while (n%i == 0)
        {
            ck++;
            n = n/i;
        }
        if(ck)
            vec.pb(make_pair(i,ck));
    }
    if (n > 2)
        vec.pb(make_pair(n,1));
}

int main()
{
    int n,d;
    while(sf("%d%d",&n,&d))
    {
        if(n==0&&d==0)break;
        d=abs(d);
        ll result=1;
        factorsofFactorial(n);
        primeFactors(d);
        for(int i=0; i<vec.size(); i++)
        {
            if(mp[vec[i].first]<vec[i].second)
            {
                result=0;
                break;
            }

            mp[vec[i].first]=mp[vec[i].first]-vec[i].second;
        }



        map<int,int >::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {

            if(it->second>0)
            {
                result*=((it->second)+1);
            }
        }

        pf("%lld\n",result);
        mp.clear();
        vec.clear();
        /*   cout<<it->first<<"   "<<it->second<<endl;
        nl;
        for(int i=0;i<vec.size();i++)
           cout<<vec[i].first<<"  "<<vec[i].second<<endl;*/

    }

    return 0;
}

