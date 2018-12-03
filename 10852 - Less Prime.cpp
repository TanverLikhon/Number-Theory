///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1793
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define  MAX 10000

///accepted at 0.00 sec :)
bool prime[MAX];
void SieveOfEratosthenes()
{
    memset(prime,true,sizeof(prime));
    for (int p=2; p*p<=MAX; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=MAX; i += p)
                prime[i] = false;
        }
    }
    //cout<<"sieve entered";
}
int main()
{
    int n;
    int t;
    sf("%d",&t);
    SieveOfEratosthenes();
    while(t--)
    {
        sf("%d",&n);
        for(int i=n/2; i<=n; i++)
        {
            if(prime[i]==true&&(i*2)>n)
            {
                pf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}


