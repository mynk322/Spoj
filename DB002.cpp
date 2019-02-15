#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,z,n,i;
    cin>>t;
    long int n1,n2;
    for(z=0;z<t;z++)
    {
        cin>>n;
        long long int s;
        s=3+(n-1)*(6+(n-2)*(15+(n-3)*(35+(n-4)*(101+(n-5)*405))));
        s=s%1000000007;
        cout<<s<<endl;
    }
    return 0;
}
