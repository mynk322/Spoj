
#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z,n,i;
    cin>>t;
    long int n1,n2;
    for(z=0;z<t;z++)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        long long int x=0;
        for(i=0;i<n;i++)
            x+=a[i]*b[i];
            cout<<x<<endl;
    }
    return 0;
}
