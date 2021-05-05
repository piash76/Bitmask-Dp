///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>



using namespace std;

#define ll                      long long



///http://www.shafaetsplanet.com/?p=3721
///https://www.youtube.com/watch?v=JE0JE8ce1V0



///complexity: total state (n*2^n) so for inner loop there are (n*2^n)*n call


const int N =20;
ll dis[N][N];
ll dp[N][1<<20];
ll nc;

ll to_set(ll n,ll i) ///set the ith bit
{
    return n|=(1<<i);
}
ll to_reset(ll n,ll i)
{
    return n&=~(1<<i);
}
///ith bit is set or not
bool is_on(ll n,ll i)
{
    return n&(1<<i);

}


///brute force (n-1)!
///this is n^2 * 2^n with n*2^n states



ll tsp(ll city,ll mask)
{
    if(mask==(1<<nc)-1) return dis[city][0];
    if(dp[city][mask]!=-1) return dp[city][mask];

    ll s=1e18;
    for(ll i=0;i<nc;i++)   ///cities
    {
        if(is_on(mask,i)==false)
        {
            s=min(s,dis[city][i]+tsp(i,to_set(mask,i)));    ///from city to another possible city i
        }
    }

    return dp[city][mask]=s;
}


int main()
{


    ll i,j,k,t,cas=0;
    cin>>nc;
    for(i=0;i<nc;i++)
    {
        for(j=0;j<nc;j++)
        {
            cin>>dis[i][j];
           // dp[i][j]=-1;
        }
    }
    memset(dp,-1,sizeof(dp));




    ll ans=tsp(0,1);
    ///tsp(0,msk|(1<<0)) msk=0
    cout<<ans<<endl;





}



