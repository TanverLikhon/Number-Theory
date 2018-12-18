//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1732
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted at 0.00 :)
ll primefactsum(ll n)
{
    ll sum=0;
    int ck=0;
    ll m=n;
    int c=0;
    if (n==1)
        return 2;
    if(n%2==0)
    {
        ck++;
        while(n%2==0)
        {

            c++;
            n=n/2;
        }
        if(c)
            sum=sum+ceil(pow(2,c));
    }
    for(ll i=3; i<=sqrt(n)+1; i=i+2)
    {
        if(n%i==0)
        {
            c=0;
            ck++;
            while(n%i==0)
            {
                c++;
                //mp[i]++;

                n=n/i;
            }

            if(c>0)
            {
                sum=sum+ceil(pow(i,c));
            }

        }

    }
    c=0;
    if(n>2)
    {
        ck++;
        // cout<<"7 entered"<<endl;
        sum=sum+n;
    }
//   cout<<ck<<"   "<<sum<<endl;
    if(ck==1)
        return m+1;
    return sum;
}
int main()
{
    ll n;
    int i=1;
    while(sf("%lld",&n)&&n!=0)
    {
        pf("Case %d: %lld\n",i,primefactsum(n));
        i++;
    }

    return 0;
}
