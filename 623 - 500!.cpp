///
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 100000
///accepted :) 0.85 sec
int multiplication(int x,int fact[],int fact_size)
{
    int prod,carry=0;
    for(int i=0; i<fact_size; i++)
    {
        prod=fact[i]*x+carry;
        fact[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        fact[fact_size]=carry%10;
        carry=carry/10;
        fact_size++;
    }
    return fact_size;
}
void factorial(int n)
{
   int  fact[MAX];
  fact[0]=1;
  int  fact_size=1;
    ll sum=0;
    for(int i=2; i<=n; i++)
        fact_size=multiplication(i,fact,fact_size);
        for(int i=fact_size-1;i>=0;i--)
pf("%d",fact[i]);
}

int main()
{
    int n;
    while(sf("%d",&n)!=EOF)
    {
        pf("%d!\n",n);
        factorial(n);
nl;
    }


    return 0;
}

