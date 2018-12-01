#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted :)
vector<ll>vec;
ll gcd (ll a,ll b)
{
 if(b==0)return a;
 else
    return gcd(b,a%b);
}
int main()
{
    int t;
    sf("%d",&t);
    getchar();
    while(t--)
    {
         ll x;
        string str;
        getline(cin,str);
        stringstream ss(str);
        while(ss>>x)
        {
            vec.pb(x);
        }
    ll maxx=1;
        for(int i=0;i<vec.size()-1;i++)
        for(int j=i+1;j<vec.size();j++)
        if(i!=j)
            if(gcd(vec[i],vec[j])>maxx)maxx=gcd(vec[i],vec[j]);

        pf("%lld\n",maxx);vec.clear();
    }

return 0;
}

