
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")

int Divisor(int m,int x)
{
    int ck=0,n;
    if(m%2==0)
    {
        if(x%2!=0)
            x=x-1;
        for(int i=x; i>=2; i=i-2)
        {
            n=i;
            while(n%m==0)
            {
                ck++;
                n=n/m;
            }
        }
    }
    else
    {
        for(int i=x; i>=2; i=i--)
        {
           cout<<"HH"<<endl;
            n=i;
            while(n%m==0)
            {
                ck++;
                n=n/m;
            }
        }
    }
    return ck;
}
int main()
{
    int t;
    sf("%d",&t);
    int i=1;
    while(t--)
    {
        int m,n;
        sf("%d %d",&m,&n);
        int x= Divisor(m,n) ;
        if(x==0||m>n)
            pf("Impossible to divide\n");
        else
            pf("Case %d:\n%d\n",i,x);
        i++;
    }
    return 0;
}

