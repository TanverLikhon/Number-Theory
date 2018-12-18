#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
using namespace std;
#define MAX 10000
int b;
vector<pair<int,int>>ans;
int multiply(int x, int res[], int res_size);
int power(int n,int k)
{
    int ck=0;
    while(n>0)
    {
        ck=ck+n/k;
        n=n/k;
    }
    return ck;
}

void primeFactor()
{
    int ck=0;
    while(b%2==0)
    {
        ck++;
        b=b/2;
    }
    if(ck)
        ans.pb(make_pair(2,ck));
    for(int i=3; i<=sqrt(b)+1; i=i+2)
        if(b%i==0)
        {
            ck=0;
            while(b%i==0)
            {
                ck++;
                b=b/i;
            }
            if(ck)
                ans.pb(make_pair(i,ck));
        }
    if(b>2)
        ans.pb(make_pair(b,1));
}
int factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
return  res_size;
}
int multiply(int x, int res[], int res_size)
{
int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % b;
        carry = prod/b;
    }
    while (carry)
    {
        res[res_size] = carry%b;
        carry = carry/b;
        res_size++;
    }
    return res_size;
}
int main()
{
    int n;
    while(scanf("%d%d",&n,&b)!=EOF)
    {
        int digit=factorial(n);
        int zero=0;
        for(int i=0;i<ans.size();i++)
        {
            int x=power(n,ans[i].first);
        }

    }
    return 0;
}


