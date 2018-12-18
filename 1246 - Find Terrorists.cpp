///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3687
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 10001
///accepted at firs attempt 0.00 sec :)
map<int,int>mp;
bool arr[MAX];
bool isPrime[MAX];

void sieve()
{
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2; i*i<=MAX; i++)
        if(isPrime[i]==true)
            for(int j=i*i; j<=MAX; j=j+i)
                isPrime[j]=false;


}
void Factors()
{
    sieve();
    int n;
    for(int j=1; j<MAX; j++)
    {
        n=j;
        int fact=1,ck=0;
        while(n%2==0)
        {
            n=n/2;
            ck++;
        }

        if(ck>0)
            fact=fact*(ck+1);
        for(int i=3; i<=sqrt(n); i=i+2)
        {
            ck=0;
            while(n%i==0)
            {
                n=n/i;
                ck++;
            }
            if(ck>0)
                fact=fact*(ck+1);
        }
        if(n>2)
            fact=fact*(2);
        if(isPrime[fact])
            arr[j]=true;
        else
            arr[j]=false;
    }
}
int main()
{
    Factors();
    int t;
    sf("%d",&t);
    while(t--)
    {
        int l,h;
        sf("%d%d",&l,&h);
        bool flag=false;
        int ck=1;
        for(int i=l; i<=h; i++)
        {
            if(arr[i]==true)
            {
                flag=true;
                if(ck==1)
                    pf("%d",i);
                else
                    pf(" %d",i);
                    ck++;
            }

        }
        if(flag==false)pf("-1");
        nl;
    }

    return 0;
}


