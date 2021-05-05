
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>




using namespace std;


ll ar[33],base,k;
ll dp[33][1<<16];
ll n;

ll solve(ll rem,ll msk)
{
    if(msk==(1<<n)-1) return (rem==0);

    if(dp[rem][msk]!=-1) return dp[rem][msk];

    ll s=0;

    for(ll i=0;i<n;i++)
    {
        if(!(msk&(1<<i)))
        {
            s+=solve(((rem*base)+ar[i])%k,msk|(1<<i));
        }
    }


    return dp[rem][msk]=s;


}

int main()
{


    ll t,i,j,cas=0;

    scanf("%lld",&t);

    while(t--)
    {
        getchar();

        scanf("%lld %lld",&base,&k);
        char s[33];
        scanf("%s",s);

        for(i=0;i<strlen(s);i++)
        {
            if(s[i]>='A' and s[i]<='Z') ar[i]=s[i]-'A'+10;
            else ar[i]=s[i]-'0';
        }

        n=strlen(s);
        memset(dp,-1,sizeof(dp));

        ll ans=solve(0,0);


        printf("Case %lld: %lld\n",++cas,ans);


    }

    return 0;

}






