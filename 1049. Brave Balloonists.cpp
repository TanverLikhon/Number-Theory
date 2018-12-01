///http://acm.timus.ru/problem.aspx?space=1&num=1049
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
void Divisor(int n)
{

    while(n%2==0)
    {
        n=n/2;
        mp[2]++;
    }
    for(int i=3; i<=sqrt(n)+1; i=i+2)
    {
        while(n%i==0)
        {
            n=n/i;
            mp[i]++;
        }
    }
    if(n>2)mp[n]++;
}
int main()
{
    long long sum=1;
    for(int i=0; i<10; i++)
    {
        int x;
        cin>>x;
        if(x>1)
            Divisor(x);
    }
    map<int,int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
 //cout<<it->first<<"   "<<it->second<<endl;
        sum=sum*(it->second+1);
    }
    cout<<sum%10<<endl;
    return 0;
}
