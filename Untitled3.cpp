#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define  MAX 100000001
//vector<int>pm;
bool prime[MAX];
void SieveOfEratosthenes()
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for (ll p=2; p*p<=MAX; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p; i<=MAX; i += p)
                prime[i] = false;
        }
    }
    //  for(ll i=2; i<=MAX; i++)
    //      if(prime[i])
    //          pm.pb(i);
    //cout<<"$ "<<prime[4]<<endl;
}
int main()
{
    ll n;
    SieveOfEratosthenes();
    //  cout<<prime[4]<<"   "<<prime[6];

    while(cin>>n&&n!=EOF)
    {
          bool flag=false;
        if(n<=4)
            pf("%lld is not the sum of two primes!\n",n);
        else
        {

            if(n%2!=0)
            {

                if(prime[n-2]==true)
                {
                    pf("%lld is the sum of 2 and %lld.\n",n,n-2);
                }
                else
                    pf("%lld is not the sum of two primes!\n",n);

            }
            else
            {
                ll tmp = n/2;
                if (tmp%2 == 0)
                    tmp++;

                //  else tmp=tmp+2;
                for(ll i=tmp; i<=n; i=i+2)
                {
                    if(prime[i]==true&&prime[n-i]==true&&i>(n-i))
                    {
                        pf("%lld is the sum of %lld and %lld.\n",n,n-i,i);
                        flag=true;
                        break;

                    }
                }
                if(flag==false)
                    pf("%lld is not the sum of two primes!\n",n);
            }

        }



    }
    return 0;
}
