//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=720&page=show_problem&problem=1109
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 10000001
///accepted at .030 :)
bool isPrime[MAX];
bool flag =false;
void sieve()
{
    memset(isPrime,true,sizeof(isPrime));
    for(int i=2; i*i<=MAX; i++)
        if(isPrime[i])
            for(int j=i*i; j<=MAX; j=j+i)
                isPrime[j]=false;
}
void num(ll b,int &x,int &y)
{
    for(int i=2; i<=b/2; i++)
    {
        if(isPrime[i]==true&&isPrime[b-i]==true)
        {
            x=i;
            y=b-i;
            flag=true;
            break;
        }
    }

}
void generatePrime(ll n)
{
    int a,b;
    if(n%2==0)
    {
        num(n-4,a,b);
        if(flag==true)
            pf("2 2 %d %d\n",a,b);
        else
            pf("Impossible.\n");
    }
    else
    {
        num(n-5,a,b);
        if(flag==true)
            pf("2 3 %d %d\n",a,b);
        else
            pf("Impossible.\n");
    }

}
int main()
{
    ll n;
    sieve();
    while(sf("%lld",&n)!=EOF)
    {
        if(n<8)
            pf("Impossible.\n");
        else
        {
            generatePrime(n);
            //cout<<"Flag "<<flag<<endl;
        }
    }


    return 0;
}
