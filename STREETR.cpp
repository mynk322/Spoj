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
    ll a[t],b[t],c[t+1];
    cin>>a[0];
    ll s1=0;
    for(ll z=1; z<t;z++)
    {
        cin>>a[z];
        b[z]=a[z]-a[z-1];
        s1+=b[z];
    }
    ll s=gcd(b[1],b[2]);
    for(ll i=3; i<t;i++)
    {
        s=gcd(s,b[i]);
    }
    s1/=s;
    s1-=t;
    s1++;
    cout<<s1<<endl;
    return 0;
}