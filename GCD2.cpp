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
ll mulmod(ll a,ll b,ll m)
{
   ll s=0;
    while(b>0)
    {
        if(b&1)
        s=(s+a)%m;
        a*=a;
        a%=m;
        b/=2;
    }
    return s;
}
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
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
        ll a;
        string s;
        cin>>a>>s;
        ll b[s.length()],c[s.length()]={1},d=0;
        for(ll i=0; i<s.length();i++)
        {
            b[i]=(int)(s.at(i)-'0');
            c[i]=mulmod(10,i,a);
            c[i]*=b[i];
            c[i]%=a;
            d=d+c[i];
            d%=a;
        }
        cout<<gcd(a,d)<<endl;
    }
    return 0;
}