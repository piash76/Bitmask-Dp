

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

ll hp[17],dp[1<<17];

ll dam[17][17];   ///[weapon][target]

ll n;

ll amar_ceil(ll x,ll y)
{
    return (x+y-1)/y;
}

ll solve(ll msk)
{
    if(msk==(1<<n)-1) return 0;
    if(dp[msk]!=-1) return dp[msk];

    ll ans=LLONG_MAX;


    for(ll i=0;i<n;i++)  ///searching for alive
    {
        if(!(msk&(1<<i)))  ///alive
        {
            ll best_weapon_dam=LLONG_MAX;

            for(ll j=0;j<n;j++)   ///searcing best weapon collected from  all dead targets
            {
                if(msk&(1<<j)) ///dead
                {
                    if(dam[j][i]) best_weapon_dam=min(best_weapon_dam,amar_ceil(hp[i],dam[j][i]));
                }
            }

            if(best_weapon_dam==LLONG_MAX) best_weapon_dam=hp[i];  ///if no weapon found>0 then have to kill with .45

            ans=min(ans,best_weapon_dam+solve(msk|(1<<i)));


        }

    }

    return dp[msk]=ans;
}


int main()
{


   ll i,j,k,t,cas=0;
    scanf("%lld",&t);
    while(t--)
    {
        getchar();

        memset(dp,-1,sizeof(dp));
        scanf("%lld",&n);
        for(i=0;i<n;i++) scanf("%lld",&hp[i]);

        for(i=0;i<n;i++)
        {
            char s[20];
            scanf("%s",s);
            for(j=0;j<n;j++)
            {
                dam[i][j]=s[j]-'0';

            }
        }


         ll ans=LLONG_MAX,msk=0;

        for(i=0;i<n;i++)
        {

            ans=min(ans,hp[i]+solve(msk|(1<<i))); ///starting killing ith target with .45
        }


         printf("Case %lld: %lld\n",++cas,ans);






    }





    return 0;

}





