#include <bits/stdc++.h>
using namespace std;
bool numbers[1000001];
long long int primes[78493];
int t=10000;
int main()
{

    long long int i,j;
    long long n,pos;
    int ck=0;
/*   for(i = 4 ; i < 1000001 ; i+=2)
    {
        numbers[i] = 1;
    }*/
    primes[ck++] = 2;
    for(j = 2 ; j < 1000001 ; j++)
    {
        if(numbers[j] == 0)
        {
            primes[ck++] = j;

            for(i = j*j ; i < 1000000 ; i+= j*2)
            {
                numbers[i] = 1;
            }
        }
    }
    long long m;
    long long len=sizeof(primes);
    //cout<<len<<endl;
    while(cin>>m)
    {
        if(m<0)
        {
            break;
        }
        for(int i=0; i<t; i++)
        {
            if(m%primes[i]==0)
            {
                while(m%primes[i]==0)
                {
                    cout<<primes[i]<<endl;
                    m/=primes[i];
                }
            }
        }
       /* if(m!=1)
        {
            cout<<m<<endl;
        }*/
    }
}
