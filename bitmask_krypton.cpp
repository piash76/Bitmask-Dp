
///https://codeforces.com/gym/102832/problem/A



///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>
#define ff    first
#define ss    second
#define  mp  make_pair
#define  pb  push_back


using namespace std;


int a[]={1,6,28,88,198,328,648};///cost
int b[]={8,18,28,58,128,198,388}; ///first
int c[]={10,60,280,880,1980,3280,6480};///normal


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;cin>>n;

    ll ans=-1,r;

    for(ll msk=0;msk<=(1<<7)-1;msk++)
    {
        ll s=0,rem=n;
        for(ll j=0;j<7;j++)
        {
            if(msk&(1<<j) and rem>=a[j])
            {
               s+=b[j]+c[j];
               rem-=a[j];
            }
        }


        for(ll j=0;j<7;j++)
        {
            if(msk&(1<<j) and rem>=a[j])  ///used
            {
                while(rem)
                {
                    s+=c[j];
                    rem-=a[j];
                }
            }
            else   ///not used
            {
                if(rem>=a[j])
                   {
                        while(rem)
                        {
                            s+=c[j];
                            rem-=a[j];
                        }
                        s+=b[j];
                   }

            }
        }

        ans=max(ans,s);

    }


    cout<<ans<<endl;








    return 0;

}





