#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(ll i=a; i<b; i++)
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fj(a,b) for(ll j=a; j<b; j++)
#define fk(a,b) for(ll k=a; k<b; k++)
typedef unsigned long long ll;
typedef long double ld;
#define pll pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define I insert
#define vll vector<ll>
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define MAX 1000000007
ll powmod(ll n,ll p)
{
    if(p==1)
    return n%MAX;
    if(p&1)
    return n*powmod(n*n%MAX,p/2)%MAX;
    else
    return powmod(n*n%MAX,p/2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(0);
    ll t,n;
    cin>>t;
    for(ll i=0; i<t;i++)
    {
        cin>>n;
        ll s=(powmod(10,n)-1)%MAX;
        s*=50;
        s%=MAX;
        s+=36*n;
        s%=MAX;
        ll d=powmod(81,MAX-2);
        s*=d;
        s%=MAX;
        cout<<s<<endl;
    }
    return 0;
}