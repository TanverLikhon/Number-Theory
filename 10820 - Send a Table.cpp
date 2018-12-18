///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1761
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 50002
///accepted :)
vector<int>vec;
ll ans[MAX];
ll  phifunc(int n)
{
    int ck=0;
    ll res=1;
    while (n%2 == 0)
    {
        ck++;
        n = n/2;
    }
    if(ck)
    {
        vec.pb(2);
        res=res*2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        ck=0;
        while (n%i == 0)
        {
            ck++;
            n = n/i;
        }
        if(ck)
        {
            vec.pb(i);
            res=res*i;
        }

    }
    if (n > 2)
    {
        vec.pb(n);
        res*=n;
    }
    return res;
}

void sieve()
{
    bool isPrime[MAX];
    ans[1]=1;
    memset(isPrime,true,sizeof(isPrime));
    for(int i=2; i*i<MAX; i++)
        if(isPrime[i]==true)
        {
            for(int j=i*i; j<MAX; j=j+i)
            {
                isPrime[j]=false;
            }

        }

    for(int i=2; i<MAX; i++)
    {
        if(isPrime[i])
            ans[i]=ans[i-1]+2*(i-1);
        else
        {
            ll ck=1;
            ll res=phifunc(i);
            for(int j=0; j<vec.size(); j++)
            {
                ck*=(vec[j]-1);
            }
            ans[i]=ans[i-1]+2*((i*ck)/res);
            vec.clear();

        }
    }

}
int main()
{
    sieve();
    int n;
    while(sf("%d",&n)&&n!=0)
    {
        pf("%d\n",ans[n]);
    }

    return 0;
}

