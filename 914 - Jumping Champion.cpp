///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=855
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 1000001
bool prime[MAX];
///highest difference in this limit is 118
///https://e...content-available-to-author-only...a.org/wiki/Prime_gap
///accepted at 0.00 :)
map<int,int>mp;
void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;

    for(int i=2; i<=sqrt(MAX)+2; i++)
        if(prime[i])
            for(int j=i*i; j<=MAX; j=j+i)
                prime[j]=false;

//    for (int p=2; p<=10; p++)
    //  if (prime[p])
    //   cout << p << " ";
}
int main()
{
    sieve();
    int t;
    sf("%d",&t);
    while(t--)
    {
        int diff[130]= {0};
        int u,l;
        vector<int >pm;
        sf("%d%d",&u,&l);
        for(int i=u; i<=l; i++)
        {
     //       cout<<"i"<<i<<"  "<<prime[i]<<endl;
            if(prime[i])
                pm.pb(i);
        }
   //     cout<<"printing primes"<<endl;
     //   for(int i=0; i<pm.size(); i++)
     //       cout<<pm[i]<<endl;
        if(pm.size()<2)
        {
            pf("No jumping champion\n");
        }
        else
        {
            //      int diff;
            for(int i=1; i<pm.size(); i++)
                diff[pm[i]-pm[i-1]]++;
            int maxx=0;
            int val;
            for(int i=0; i<130; i++)
            {
                if(diff[i]>=maxx)
                {
                    maxx=diff[i];
                    mp[diff[i]]++;
                    val=i;
                }
            }

            if(mp[diff[val]]>1)
                pf("No jumping champion\n");
            else
                pf("The jumping champion is %d\n",val);
        }
        pm.clear();
        mp.clear();
    }


    return 0;
}
