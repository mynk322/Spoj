#include <bits/stdc++.h>//use segmented seive
using namespace std;
bool isprime(long n)
{
    long i,c;
    if(n%2==0&&n!=2)
        return false;
    if(n==2)
        return true;
    for(i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long t,z,n,m,i;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>n>>m;
        for(i=n;i<=m;i++)
        {
            if(isprime(i)&&i!=1)
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
