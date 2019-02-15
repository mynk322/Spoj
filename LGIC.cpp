#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,n,i,j;
    cin>>t;
    z=t;
    i=1;
    while(z>0)
    {
        i*=z;
        z--;
    }
    j=i+pow(2,t)-t;
    cout<<j;
    return 0;
    }
