#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

using namespace std;
map<ll,ll >mp;
void Divisor(ll m)
{
    int n;
    map<ll,ll>::iterator it;
    for(int j=m; j>=2; j--)
    {
        n=j;
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


    for(it=mp.begin(); it!=mp.end(); it++)
    {

        cout<<it->first<<"   "<<it->second<<endl;
    }
    mp.clear();
    //return sum;
}
int main()
{

    int n;
    while(sf("%d",&n)&&n!=0)
    {
        n=abs(n);
        Divisor(n);
    }
    return 0;
}



