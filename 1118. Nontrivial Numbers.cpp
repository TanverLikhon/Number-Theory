#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define MAX 1000001
///accepted :)
long long arr[MAX];
void Divisor()
{
    for(int i=1;i<=MAX;i++)
        for(int j=i;j<=MAX;j=j+i)
        arr[j]=arr[j]+i;
}
int main()
{
    Divisor();
   double minn;
ll a,b,c;
   sf("%lld %lld",&a,&b);
   minn=1000000000000.0;

for(ll i=a;i<=b;i++)
{
    double y=(arr[i]-i)/(i*1.0);
    double x=min(minn,y);
    //cout<<y<<endl;
 if(x==y)
    {
        minn=y;
        c=i;
    }

}
pf("%lld\n",c);

return 0;
}

