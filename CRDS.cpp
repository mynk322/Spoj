
#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z,n;
    cin>>t;
    long long int s;
    for(z=0;z<t;z++)
    {
        cin>>n;
        s=(2*n*(n+1)/2)+(n*(n-1)/2);
        cout<<s%1000007<<endl;
    }
    return 0;
}

