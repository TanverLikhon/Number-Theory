#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define  MAX 1000001
///accepted at 0.1 sec :)
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
        int flag=false;
        for(int i=3; i<=n/2; i++)
        {
            if(prime[i]==true&&prime[n-i]==true)
            {
                pf("%d = %d + %d\n",n,i,n-i);
                flag=true;
                break;
            }

        }
        if(flag==false)pf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

