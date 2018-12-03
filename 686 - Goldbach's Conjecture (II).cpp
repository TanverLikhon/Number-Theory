///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=627
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define  MAX 32770
///accepted at .00 sec :)
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
    SieveOfEratosthenes();
    while(sf("%d",&n)&n!=0)
    {
        int x,y;
        int ck=0;
        for(int i=2; i<=n/2; i++)
        {
            if(prime[i]==true&&prime[n-i]==true)
            {
                ck++;
            }

        }
        pf("%d\n",ck);
    }
    return 0;
}


