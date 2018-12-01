#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
vector<ll>vec;
/// tle follow the first one
ll findMaxGcd()
{
    int n=vec.size();
    sort(vec.begin(),vec.end());
    ll highest=vec[n-1];
    int divisor[highest +1] = {0};
    for(int i=0; i<n; i++)
        for(int j=1; j<=sqrt(vec[i]); j++)
        {
            if(vec[i]%j==0)
            {
                divisor[j]++;
                if(j==vec[i]/j);
                else
                    divisor[vec[i]/j]++;
            }
        }
    for(int i=highest; i>=1; i--)
        if(divisor[i]>1)
                    return i;
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
        pf("%lld\n",findMaxGcd());
        vec.clear();
    }

    return 0;
}


