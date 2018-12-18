///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2828
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 1001
///accepted at second attempt :) 0.00sec
map<int,int>mp;
void  Divisor()
{
    int n;
    for(int j=1; j<MAX; j++)
    {
        n=j;
        int  sum=1;
        int ck=1;
        while(n%2==0)
        {
            n=n/2;
            ck++;
        }
        if(ck>1)
            sum=sum*(pow(2,ck)-1);
        for(ll i=3; i<=sqrt(n)+1; i=i+2)
        {
            ck=1;
            while(n%i==0)
            {
                n=n/i;
                ck++;
            }
            if(ck>1)
                sum=sum*ceil(((pow(i,ck)-1)/(i-1)));
        }
        if(n>2)
            sum=sum*ceil((pow(n,2)-1)/(n-1));
     mp[sum]=j;
    }
  /*  map<int,int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<"   "<<it->second<<endl;
    }*/

}
int main()
{
    int i=1;
    int s;
    Divisor();
    while(sf("%d",&s)&&s!=0)
    {
        pf("Case %d: ",i);
        if(mp[s]>0)
            pf("%d\n",mp[s]);
        else
            pf("-1\n");
        i++;
    }

    return 0;
}

