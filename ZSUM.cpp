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
#define ret return
#define vll vector<ll>
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define MAX 1000000007
ll modexp(ll x, ll y, ll p)
{
    ll res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(0);
    ll t,n;
    while(1)
    {
        ll a,b,m=10000007,s=0;
        cin>>a>>b;
        if(a==0&&b==0)
        break;
        s=s+2*modexp(a-1,b,m);
        s%=m;
        s+=modexp(a,b,m);
        s%=m;
        s+=modexp(a,a,m);s%=m;
        s+=2*modexp(a-1,a-1,m);
        s%=m;
    cout<<s<<endl;
        }
    return 0;
}
