#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///unsolved
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int j,i=1;
while(cin>>j&&j!=-1)
{
    getchar();
        string str;
     getline(cin,str);
     stringstream ss(str);
        int k=str.length()-2-j;
    double x;
ss>>x;
ll m,n;
m=(ll)round((x*pow(10,k)*(pow(10,j)-1)));
n=(ll)round(pow(10,k)*(pow(10,j)-1));
pf("Case %d: %lld/%lld\n",i,m/gcd(m,n),n/gcd(m,n));
i++;
}
    return 0;
}

