
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
    ll n,k;
    sf("%lld %lld",&n,&k);
    ll sum=0;
    ll tred,tgreen,tblue;
    tred=n*2;
    tgreen=n*5;
    tblue=n*8;
    //cout<<(tgreen+k)/k<<endl;
    sum=(tred+k-1)/k+(tgreen+k-1)/k+(tblue+k-1)/k;
//sum=sum+ceil(tred/k)+ceil(tgreen/k)+ceil(tblue/k);
    cout<<sum<<endl;

    return 0;
}
