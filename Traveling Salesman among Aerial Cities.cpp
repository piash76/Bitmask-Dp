///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>



//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short
#define pii             pair<int,int>
#define pll             pair<ll,ll>


#define sc1i(a) scanf("%d",&a)
#define sc2i(a,b) scanf("%d %d",&a,&b)
#define   sc3i(a,b,c)       scanf("%d %d %d",&a, &b, &c)
#define    p1i(a)           printf("%d\n",(a))
#define    p2i(a,b)        printf("%d %d\n",(a), (b))
#define    p3i(a,b,c)      printf("%d %d %d\n",(a), (b), (c))


#define sc1l(a) scanf("%lld",&a)
#define sc2l(a,b) scanf("%lld %lld",&a,&b)
#define   sc3l(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1l(a)           printf("%lld\n",(a))
#define    p2l(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3l(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))


#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ci   cout<<"Impossible"<<endl
#define f1(i,a,b)  for(ll i=a;i<b;i++)
#define f2(i,a,b) 	for(ll i=a;i<=b;i++)
#define fr(i,a,b)   for(ll i=a;i>=b;i--)
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))

#define geta(a,n)           for(ll i=0;i<n;i++) cin>>a[i]
#define puta(a,n)           for(ll i=0;i<n;i++) cout<<a[i]<<" "

#define geta1(a,n)           for(ll i=1;i<=n;i++) cin>>a[i]
#define puta1(a,n)           for(ll i=1;i<=n;i++) cout<<a[i]<<" "


#define getar(a,n)           for(int i=0;i<n;i++) scanf("%lld",&a[i])
#define getar1(a,n)           for(int i=1;i<=n;i++) scanf("%lld",&a[i])
#define putar(a,n)           for(int i=0;i<n;i++) printf("%lld ",a[i])
#define putar1(a,n)           for(int i=1;i<=n;i++) printf("%lld ",a[i])
#define all(a)                  a.begin(),a.end()
#define lla(A)                  A.rbegin(), A.rend()
#define unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end())
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define greatersrt(v)  sort(v.begin(),v.end(),greater<ll>())
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define mem(a,x)                memset(a,x,sizeof(a))
#define see_you                     return 0
#define sorta(a,n)                   sort(a,a+n)
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())

#define nl                        printf("\n")
ll caseno=0;

#define  printcase             printf("Case %d: ",++caseno)
#define Debug                   cout<<endl<<"AND I AM IRONMAN"<<endl;
#define binleastsigonebit(x)    __builtin_ffs(x)
#define binleadingzeroes(x)     __builtin_clz(x)
#define bintrailingzeroes(x)    __builtin_ctz(x)
#define bintotalones(x)         __builtin_popcount(x)



//Constants
const int mod = 1000000007; // 998244353
//const int mod = 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
const int maxn = 211111;
const int maxn1 = 111111;
#define BOUND 0x100000000    /// 2^32

#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << '\n'; }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << " "; err(++it, args...); }




///-----------------------------GRAPH MOVES----------------------------////
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/


///-----------------------------VARIOUS FUNCTIONS----------------------------////

bool isPrime(long long int n)
{
    bool flag = true;
    for(long long int i = 2; i*i <= n; ++i)
        //for(int i = 2; i <= sqrt(n); ++i)
        //for(int i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

bool ispoweroftwo (ll x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
    ///if(n&(n-1)==0) return true;
}

inline void normal(ll &a) { a %= mod; (a < 0) && (a += mod); }
inline ll modMul(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a * b) % mod; }
inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a + b) % mod; }
inline ll modSub(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while (p) { if (p & 1LL) r = modMul(r, b); b = modMul(b, b); p >>= 1LL; } return r; }
inline ll modInverse(ll a) { return modPow(a, mod - 2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

///if(a*b) may overflow it returns (a*b)%c
long long mul1mod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

ll amar_ceil(ll x,ll y)
{
    return (x+y-1)/y;
}

long long binpow(long long base,long long power)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base);
                base = (base*base);
                power/=2;
        }
        return result;
}

long long  binmod(long long base,long long power,long long M)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base)%M;
                base = (base*base)%M;
                power/=2;
        }
        return result;
}

ll pow2(ll power)
{
    return 1<<power;
}

bool palindrome(string &s)
{
    ll l=s.size();
    bool f=true;
    for(ll i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1]) {f=false;break;}
    }
    return f;
}
bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}

///comparator

/*struct cmp
{
    bool operator()(pair<int , int> &a ,pair<int , int> &b){
        return a.first > b.first;
    }
};*/





///ITS NOT WHO I AM UNDERNEATH,BUT WHAT I DO THAT DEFINES ME.
///http://www.shafaetsplanet.com/?p=3721
///https://www.youtube.com/watch?v=JE0JE8ce1V0


const int N =20;
ll dis[N][N];
ll dp[N][1<<20];
ll nc;
ll x[N],y[N],z[N];


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


ll tsp(ll city,ll mask)
{
    if(mask==(1<<nc)-1)
    {
        return dis[city][0];
    }
    if(dp[city][mask]!=-1)
    {
        return dp[city][mask];
    }

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

    flash()
    ll i,j,k,t,cas=0;
   cin>>nc;
    for(i=0;i<nc;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }

    for(i=0;i<nc;i++)
    {
        for(j=0;j<nc;j++)
        {
            dis[i][j]=abs(x[j]-x[i])+abs(y[j]-y[i])+ max(0ll,z[j]-z[i]);
            //dp[i][j]=-1;
        }
    }
    mem(dp,-1);


    ll ans=tsp(0,1);
    cout<<ans<<endl;





    see_you;
}




