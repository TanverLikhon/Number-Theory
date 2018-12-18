#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
map<int,int>mp;
ll Divisor(ll n)
{
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
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int ck;
        for(int i=2;i<=n;i++)
    }

    return 0;
}

