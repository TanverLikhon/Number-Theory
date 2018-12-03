#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///tle
vector<int >primes;
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
        if (prime[p])
            primes.pb(p);

}
int main()
{
    int n;
    while(sf("%d",&n)!=EOF)
    {
        int x,y;
        bool flag=false;
        SieveOfEratosthenes(n);
        for(int i=1; primes[i]<=n/2; i++)
        {
            for(int j=primes.size()-1; primes[j]>=n/2; j--)
            {
                if((primes[i]+primes[j])==n)
                {

                    x=primes[i];
                    y=primes[j];flag=true;
                   break;
                }
            }
            if(flag==true)break;
        }
        if(flag==true)
pf("%d = %d + %d\n",n,x,y);
else pf("Goldbach's conjecture is wrong.\n");
        primes.clear();
    }

    return 0;
}

