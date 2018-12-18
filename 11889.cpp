#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
map<int,int>mp;
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
void Divisor(int n)
{
    map<int,int>::iterator it;

    while(n%2==0)
    {
        n=n/2;
        mp[2]++;
    }
    for(int i=3; i<=sqrt(n)+1; i=i+2)
    {
        while(n%i==0)
        {
            n=n/i;
            mp[i]++;
        }
    }
    if(n>2)
        mp[n]++;
}

vector<pair<int,int>>ans;
void primeFactor(int k)
{
    for(int i=2; k!=1; i++)
    {
        if(k%i==0)
        {
            int ck=0;
            while(k%i==0)
            {
                k=k/i;
                ck++;
            }
            ans.pb(make_pair(i,ck));
        }
    }

}
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        int a,c;
        int sum=1;
        sf("%d %d",&a,&c);
        Divisor(c);
        primeFactor(a);
        for(int i=0; i<ans.size(); i++)
        {
            if(mp[ans[i].first]==ans[i].second)
                mp[ans[i].first]=0;
            else if(mp[ans[i].first]>=0)
                mp[ans[i].first]=max(ans[i].second,mp[ans[i].first]);
        }
        map<int,int >::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            sum=sum*ceil(pow(it->first,it->second));
        }
if(gcd(a,sum)*c!=(a*sum))pf("NO SOLUTION\n");
else pf("%d\n",sum);
        mp.clear();
        ans.clear();
    }

    return 0;
}

