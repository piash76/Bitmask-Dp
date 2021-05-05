





///PROBLEM DESCRIPTION: how many permutations where adjacent diff not greater than k


#include<bits/stdc++.h>


///complexity: total state (n*2^n) so for inner loop there are (n*2^n)*n call


#define ll long long


using namespace std;


const int maxn = 311111;
ll n,k;
ll dp[18][1<<18];

ll solve(ll last,ll mask)
{
    if(mask==(1<<n)-1) return 1;
    if(dp[last][mask]!=-1) return dp[last][mask];

    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        if(!(mask&(1<<i)))  ///off bit
        {
            if(abs(last-i)<=k)
            {
                sum+=solve(i,mask|(1<<i)); ///setting on the ith bit
            }
        }
    }


    return dp[last][mask]=sum;

}

int main()
{
    ll t;scanf("%lld",&t);
    while(t--)
    {
        memset(dp,-1,sizeof(dp));

        scanf("%lld %lld",&n,&k);

        ll ans=0,msk=0;
        for(ll i=0;i<n;i++)
        {
            ans+=solve(i,msk|(1<<i));   ///setting on the ith bit in mask
        }

        printf("%lld\n",ans);

    }


}

