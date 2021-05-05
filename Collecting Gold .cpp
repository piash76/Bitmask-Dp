

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=500005;

pair<ll,ll> ar[18];
ll n;

ll dp[18][1<<18];

ll dis(pll x,pll y)
{
    return max(abs(x.ff-y.ff),abs(x.ss-y.ss));  ///cause of 8 directions
}

ll solve(ll last,ll msk)
{
    // cout<<"last "<<last<<" msk "<<msk<<endl;

    if(msk==(1<<n)-1)
    {
      //  cout<<"SESH last "<<last<<" msk "<<msk<<endl;

        return dis(ar[last],ar[0]);
    }

    if(dp[last][msk]!=-1) return dp[last][msk];

    ll s=LLONG_MAX;

    for(ll i=0;i<n;i++)
    {
        if(!(msk&(1<<i)))
        {
            s=min(s,dis(ar[last],ar[i])+solve(i,(msk|(1<<i))));
        }
    }

    //cout<<"S "<<s<<endl;


    return dp[last][msk]=s;


}




int main()
{


    ll t,i,j,cas=0;
    scanf("%lld",&t);
    while(t--)
    {
        getchar();

        ll x,y;scanf("%lld %lld",&x,&y);

        ll idx=1;

        for(i=0;i<x;i++)
        {
            char s[25];scanf("%s",s);
            for(j=0;j<y;j++)
            {
               if(s[j]=='x') ar[0]={i,j};
               else if(s[j]=='g') ar[idx++]={i,j};
            }
        }

        n=idx;

       // for(i=0;i<=n;i++) cout<<ar[i].ff<<" "<<ar[i].ss<<endl;

        memset(dp,-1,sizeof(dp));

        ll ans=solve(0,1);

        printf("Case %lld: ",++cas);
        printf("%lld\n",ans);


    }

    return 0;

}





