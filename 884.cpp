
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 1000001
int fact[MAX];
void numberofTerms()
{
    fact[2]=1;
    int j,ck=0;
    for(int i=3; i<=MAX; i++)
    {
        ck=0;
        int n=i;
        while (n%2 == 0)
        {
            ck++;
            n = n/2;
        }
        for (int j = 3; j <= sqrt(n); j = j+2)
        {
            while (n%j == 0)
            {
                ck++;
                n = n/j;

            }
        }
        if (n > 2)
            ck++;
        fact[i]=fact[i-1]+ck;
    }

}
int main()
{
    int n;
    numberofTerms();
    while(sf("%d",&n)!=EOF)
    {
        pf("%d\n",fact[n]);
    }

    return 0;
}

