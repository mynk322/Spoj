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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(0);
    ll t,n,i;
    while(1)
    {
        ll a,b;
        cin>>a>>b;
        if(a==-1&&b==-1)
            return 0;
        if(a==0)
        {
            cout<<b<<endl;
            continue;
        }
        if(b==0)
        {
            cout<<a<<endl;
            continue;
        }
        ld c=max(a,b);
        ld d=min(a,b);
        cout<<(int)ceil((c)/(d+1))<<endl;
    }
    return 0;
}
