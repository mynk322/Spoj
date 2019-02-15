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
ll phi(ll n)
{
    float result = n; // Initialize result as n
 
    // Consider all prime factors of n and for every prime
    // factor p, multiply result with (1 - 1/p)
    for (ll p = 2; p * p <= n; ++p) {
         
        // Check if p is a prime factor.
        if (n % p == 0) {
             
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float)p));
        }
    }
 
    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));
 
    return (int)result;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(0);
    ll t,n;
    cin>>t;
    for(ll z=0; z<t;z++)
    {
        cin>>n;
        cout<<phi(n)<<endl;
    }
    return 0;
}