

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

ll n;
ll mat[18][18];
ll dp[18][1<<18];


ll solve(ll jamai,ll msk)
{
    //cout<<"JAMAI "<<jamai<<" MSK "<<msk<<endl;

    if(msk==(1<<n)-1)
    {
        return 0;
    }

    if(dp[jamai][msk]!=-1)
    {
        //cy;
        return dp[jamai][msk];
    }

    ll s=-1;


    for(ll bow=0;bow<n;bow++)
    {

        if(!(msk&(1<<bow)))
        {

             s=max(s,mat[jamai][bow]+solve(jamai+1,msk|(1<<bow)));
        }

    }

    return dp[jamai][msk]=s;
}


int main()
{





    ll t,i,j,cas=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%lld",&mat[i][j]);
            }
        }

        memset(dp,-1,sizeof(dp));



       // ll msk=0;
       ll ans=solve(0,0);


        printf("Case %lld: ",++cas);
        printf("%lld\n",ans);


    }

    return 0;

}





