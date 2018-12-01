///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1333
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define maxx 1000001
vector<int> prime;
bool primec[maxx];

void SieveOfEratosthenes()
{
    memset(primec,true,sizeof(primec));
    primec[0] = primec[1] = false;
    for (int i=4; i<maxx; i+=2)
        primec[i] = false;
    for (int i=3; i*i<maxx; i+=2)
        if (primec[i])
            for (int j=i*i; j<maxx; j+=i+i)
                primec[j] = false;
    prime.pb(2);
    for (int i=3; i<maxx; i+=2)
        if (primec[i])
            prime.pb(i);
}

int main()
{

    SieveOfEratosthenes();
    ll n;
    while (scanf("%lld", &n) && n!=-1)
    {
        int i= 0, np = prime.size();
        while (i < np)
        {
            if (n % prime[i] == 0)
            {
                while (n%prime[i] == 0)
                {
                    printf("    %d\n", prime[i]);
                    n =n/prime[i];///n nijei prime hoile tokhon n zero hoye jabe
                }///se jonno n!=1 neya hoise 48 no line e
            }
            i++;
        }
        if (n!=1)
            printf("    %lld\n", n);
        printf("\n");
    }
    return 0;
}
