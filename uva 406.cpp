///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=347
#include<bits/stdc++.h>
///accepted :)
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
vector<int >seive;
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    prime[1]=true;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=1; p<=n; p++)
        if (prime[p])
            seive.pb(p);
}

int main()
{
    int n,c;
    while(sf("%d%d",&n,&c)!=EOF)
    {
        SieveOfEratosthenes(n);
        pf("%d %d: ",n,c);
        int x,y=2*c,z=seive.size();
        if(z%2!=0&&y-1>z)
        {
            for(int i=0; i<z-1; i++)
                pf("%d ",seive[i]);
            pf("%d\n\n",seive[z-1]);
        }
        else if(z%2==0&&y>z)
        {
            for(int i=0; i<z-1; i++)
                pf("%d ",seive[i]);
            pf("%d\n\n",seive[z-1]);
        }
        else
        {

            if(z%2==0)
            {

                x=(z-2*c)/2;

                for(int i=x; i<x+y-1; i++)

                    pf("%d ",seive[i]);
                pf("%d\n\n",seive[x+y-1]);
            }
            else  if(z%2!=0)
            {
             y=y-1;//cout<<"21"<<endl;
                x=(z-y)/2;
//cout<<x<<endl;
                for(int i=x; i<x+y-1; i++)
                    pf("%d ",seive[i]);
                pf("%d\n\n",seive[x+y-1]);
            }
        }

        seive.clear();


    }
    return 0;
}
