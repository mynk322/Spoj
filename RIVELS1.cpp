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
ll por(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define MAX 1000000007
/////////////////////////////

long long ar[2000010];
void fact(){
 long long i;
    ar[0]=1;
    ar[1]=1;
    for(i=2;i<=2000000;i++)
        ar[i]=(ar[i-1]*i)%MAX;
}
long long fermet(long long x){
    long long a=1,p=x,n=MAX-2;
    while(n){
        if(n&1)
            a=(a*p)%MAX;
        p=(p*p)%MAX;
        n>>=1;
    }
    return a;
}
int main()
{
    fact();
    int t,a,b;
    long long c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        c=(fermet(ar[a])*fermet(ar[b]))%MAX;
        d=(ar[a+b]*c)%MAX;
        printf("%lld\n",d);
    }
    return 0;
}