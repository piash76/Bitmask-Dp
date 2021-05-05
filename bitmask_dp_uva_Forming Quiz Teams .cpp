

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
pair<ll,ll> ar[18];

double dp[1<<18];

double dis(pll a,pll b)
{
    return sqrt( (a.ff-b.ff)*(a.ff-b.ff)+(a.ss-b.ss)*(a.ss-b.ss) );
}

double solve(ll msk)
{
    if(msk==(1<<n)-1) return 0;
    if(dp[msk]!=-1)
    {

        return dp[msk];
    }

    double s=1e9;


    for(ll i=0;i<n;i++)
    {
        if(!(msk&(1<<i)))
        {
            //cout<<"I "<<i<<endl;

             for(ll j=0;j<n;j++)
             {
                  if(!(msk&(1<<j)) and j!=i)
                  {
                     // cout<<"J "<<j<<endl;

                      s=min(s,dis(ar[i],ar[j])+solve(msk|(1<<i)|(1<<j)));
                  }



             }
        }

    }

    //cout<<"S "<<s<<endl;


    return dp[msk]=s;



}



int main()
{



    ll t,i,j,cas=0;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;

        //cout<<"N "<<n<<endl;

        for(i=0;i<2*n;i++)
        {
            char s[20];scanf("%s",s);
            ll x,y;scanf("%lld %lld",&x,&y);

            //cout<<"S "<<s<<endl;
           // cout<<"X "<<x<<" y "<<y<<endl;

            ar[i]={x,y};


        }


        n*=2;

        for(i=0;i<=(1<<n)+5;i++) dp[i]=-1;


        double ans=solve(0);

        //cout<<ans<<endl;

        printf("Case %lld: ",++cas);
        printf("%.2f\n",ans);
    }


    return 0;

}

/*

5
sohel 10 10
mahmud 20 10
sanny 5 5
prince 1 1
per 120 3
mf 6 6
kugel 50 60
joey 3 24
limon 6 9
manzoor 0 0
1
derek 9 9
jimmy 10 10




*/




