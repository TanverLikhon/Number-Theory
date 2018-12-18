#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
vector<int>vec;
ll  primeFactors(int n)
{
    int ck=0;
    ll res=1;
    while (n%2 == 0)
    {
        ck++;
        n = n/2;
    }
    if(ck){
        vec.pb(2);res=res*2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        ck=0;
        while (n%i == 0)
        {
            ck++;
            n = n/i;

        }
        if(ck){
            vec.pb(i);res=res*i;
        }

    }
    if (n > 2){
        vec.pb(n);res*=n;
    }
        return res;
}
int main()
{
    ll n;
    while(sf("%lld",&n)&&n!=0)
    {
      //  bool flag[1000000001];
     //   memset(flag,true,sizeof(flag));
        int ck=1;
     ll res=   primeFactors(n);
        for(int i=0; i<vec.size(); i++)
        {
          ck*=(vec[i]-1);
        }
        pf("%lld\n",(n*ck)/res);
        vec.clear();
    }


    return 0;
}

