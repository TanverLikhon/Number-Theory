///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=260
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 5000
map<int,int>digit;
///accepted at 0.00 :)
int multiplication(int x,int fact[],int fact_size)
{
    int carry=0,prod;
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
    int fact[MAX];
    int fact_size=1;
    fact[0]=1;
    for(int i=2; i<=n; i++)
        fact_size=multiplication(i,fact,fact_size);
    for(int i =fact_size-1; i>=0; i--)
        digit[fact[i]]++;
}
int main()
{

    int n;
    while(sf("%d",&n)!=EOF)
    {
        factorial(n);
        //     map<int,int>::iterator it;
//   for(it=digit.begin();it!=digit.end();it++)
        //cout<<it->first<<"   "<<it->second<<endl;
        pf("%d! --\n",n);
        pf("   (0)%8d       (1)%8d        (2)%8d        (3)%8d        (4)%8d \n",digit[0],digit[1],digit[2],digit[3],digit[4]);
        pf("   (5)%8d       (6)%8d        (7)%8d        (8)%8d        (9)%8d \n",digit[5],digit[6],digit[7],digit[8],digit[9]);

        digit.clear();
    }

    return 0;
}

