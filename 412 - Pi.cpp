///https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=353
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted :)
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n;
   // while(sf("%d",&n)&&n!=0)
   while(cin>>n&&n!=0)
    {
        int ck=0;
        int arr[n];
        for(int i=0; i<n; i++)
            sf("%d",&arr[i]);
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(gcd(arr[i],arr[j])==1)
                    ck++;
        if(ck>0)
        {
            ll d=n*(n-1)/2;///cant use factorial formula here coz n>=1 n<50
            cout<<fixed<<setprecision (6) <<sqrt(6*d*1.0/ck)<<endl;

        }
        else
            pf("No estimate for this data set.\n");
    }

    return 0;
}

