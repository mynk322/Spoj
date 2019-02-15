#include<stdio.h>
#define MOD 1000000007

long long ar[2000010];
void fact(){
 long long i;
    ar[0]=1;
    ar[1]=1;
    for(i=2;i<=2000000;i++)
        ar[i]=(ar[i-1]*i)%MOD;
}
long long fermet(long long x){
    long long a=1,p=x,n=MOD-2;
    while(n){
        if(n&1)
            a=(a*p)%MOD;
        p=(p*p)%MOD;
        n>>=1;
    }
    return a;
}
int main(){
    int t,a,b;
    long long c,d;
    fact() ;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        c=(fermet(ar[a])*fermet(ar[b]))%MOD;
        d=(ar[a+b]*c)%MOD;
        printf("%lld\n",d);
    }
    return 0;
}