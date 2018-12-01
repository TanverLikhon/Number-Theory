#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///accepted
void factorize(ll n)
{
    ll max=0;
    int ck=0,ck1=0;
    while(n%2==0)
    {
        n=n/2;
        ck++;
    }
    if(ck)
    {
        max=2;
        ck1++;
    }
    for(ll i=3; i<=sqrt(n)+1; i=i+2)
    {

        ck=0;
        while(n%i==0)
        {
            ck++;
            n=n/i;
        }
        if(ck)
        {
            max=i;
            ck1++;
        }
    }
    if(n>2)
    {
        max=n;
        ck1++;
    }
    if(ck1>1)
        cout<<max<<endl;
    else
        cout<<"-1"<<endl;

}
int main()
{
    ll n;
    while(cin>>n&&n!=0)
    {
        n=abs(n);
        factorize(n);
    }

    return 0;
}

