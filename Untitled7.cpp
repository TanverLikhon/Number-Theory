
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")

ll binomial(int n1,int k1,int n2,int k2)
{
    double res=1;
    ll res1=1,res2=1;
    if(k2>n2-k2)
        k2=n2-k2;
    if(k1>n1-k1)
        k1=n1-k1;
    for(int i=0;; i++)
    {
        if(i>=k2&&i>=k1)
            break;
        if(i>=k1)
            res1=1;
        else
        {
            res1=res1*(n1-i);
            res1=res1/(i+1);
        }
        if(i>=k2)
            res2=1;
        else
        {
            res2=res2*(n2-i);
            res2=res2/(i+1);
        }
        res*=(res1/res2)*1.0;
    }
    return  res;
}
int main()
{
//int n,k;
    int n2,k2,n1,k1;
    while(sf("%d%d%d%d",&n1,&k1,&n2,&k2)!=EOF)
    {

        cout<<binomial(n1,k1,n2,k2)<<endl;

    }

    return 0;
}
