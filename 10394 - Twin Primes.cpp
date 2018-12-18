///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=720&page=show_problem&problem=1335
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 20000001
///accepted :) at 0.170 :(
bool isPrime[MAX];
vector<int >prime;
int mp[10000000];
void sieve()
{
    memset(isPrime,true,sizeof(isPrime));
    isPrime[1]=false;
    isPrime[0]=false;
    for(int i=2; i*i<MAX; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=MAX; j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }
    for(int i=2; i<=MAX; i++)
        if(isPrime[i])
            prime.pb(i);
}
void twins()
{

    int ck=1;
    for(int i=1; i<prime.size(); i++)
    {
        if(prime[i]-prime[i-1]==2)
        {
            mp[ck]=prime[i-1];
            ck++;
        }
    }

}
int main()
{
    sieve();
    twins();

    int n;
    while(sf("%d",&n)!=EOF)
    {
        pf("(%d, %d)\n",mp[n],mp[n]+2);
    }

    return 0;
}


