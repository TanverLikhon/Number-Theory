#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

using namespace std;
map<ll,ll >mp;
bool Divisor(ll n)
{
    ll sum=1;
    map<ll,ll>::iterator it;
    while(n%2==0)
    {
        n=n/2;
        mp[2]++;
    }
    for(ll i=3; i<=sqrt(n)+1; i=i+2)
    {
        while(n%i==0)
        {
            n=n/i;
            mp[i]++;
        }
    }
    if(n>2)
        mp[n]++;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        sum=sum*((pow(it->first,it->second+1)-1)/(it->first-1));
        //cout<<it->first<<"   "<<it->second<<endl;
    }
  //  cout<<sum<<endl;
    // mp.clear();
    if(sum%2==0)
        return  true;
        return false;
}
int main()
{

    ll n;
    while(sf("%lld",&n)&&n!=0)
    {
        int ck=0;
        for(ll i=1; i<=n; i++)
        {
            if(Divisor(i)==true)
                ck++;

            mp.clear();
        }
        pf("%d\n",ck);
    }
    return 0;
}



