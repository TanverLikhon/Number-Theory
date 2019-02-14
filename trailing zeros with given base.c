#define SIZE_N 10000010

bool flag[SIZE_N+5];
vector<int> primes;
void seive()
{
    int i,j,total=0,val;
    for(i=2;i<=SIZE_N;i++) flag[i]=1;
    val=sqrt(SIZE_N)+1;
    for(i=2;i<val;i++)
        if(flag[i])
            for(j=i;j*i<=SIZE_N;j++)
            flag[i*j]=0;

    for(i=2;i<=SIZE_N;i++)
        if(flag[i])
            primes.push_back(i);
}
int factors_in_factorial(int N, int p)
{
     int sum=0;
     while(N)
     {
         sum += N/p;
         N /= p;
     }
     return sum;
}
int Trailingzero_Base_B(int N,int B)
{
     int ans, freq, power;
     ans = -1;
     for(int i=0, sz = primes.size(); i<sz and primes[i]<=sqrt(B); i++)
     {
         if(B%primes[i]==0)
         {
             freq=0;
             while(B%primes[i]==0)
             {
                 freq++;
                 B /= primes[i];
             }
             power = factors_in_factorial(N, primes[i]);
             ans = (ans == -1) ? (power/freq) : min(ans, power/freq);
         }
     }
     if(B != 1){
        power = factors_in_factorial(N, B);
        ans = (ans == -1) ? (power) : min(ans, power);
     }
     return ans;
}
void solve(int tc)
{
    int N, B;
    sfi2(N, B);
    int zero = Trailingzero_Base_B(N,B);
    pfin(zero);
}
int32_t main()
{
    seive();
    solve(1);
    return 0;
}
