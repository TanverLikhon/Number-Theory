///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1889
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 1000001
///accepted 0.13 sec :(
bool prime[MAX];
void Sieve()
{
    memset(prime,true,sizeof(prime));
    for(int i=2; i<=sqrt(MAX)+2; i++)
        if(prime[i]==true)
            for(int j=i*i; j<=MAX; j=j+i)
                prime[j]=false;
}
int main()
{
    int n;
    Sieve();
    while(sf("%d",&n)&&n!=0)
    {
        bool flag=false;
        pf("%d:\n",n);
        for(int i=2; i<=n/2; i++)
        {

            if(prime[i]==true&&prime[n-i]==true)
            {
                pf("%d+%d\n",i,n-i);
                flag=true;
                break;
            }
        }

        if(flag==false)
            pf("NO WAY!\n");
    }

    return 0;
}

