#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(ll i=a; i<b; i++)
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fj(a,b) for(ll j=a; j<b; j++)
#define fk(a,b) for(ll k=a; k<b; k++)
typedef long long ll;
typedef long double ld;
#define pll pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define I insert
#define vll vector<ll>
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define MAX 1000000007
ll gcd(ll a,ll b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
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
        ll a,b;
        cin>>a>>b;
        ll s=gcd(abs(a),abs(b));
        a=a/s;
        b/=s;

        if(a*b<0)
        cout<<abs(abs(a)+abs(b))<<endl;
        else
        cout<<abs(a-b)<<endl;
    }
    return 0;
}