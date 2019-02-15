
#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,a,b,n,n1,j;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>n>>n1;
        a=n1-n;
        llt max1=a*(n1+1)-(a*(a-1))/2;
        cout<<max1<<endl;
    }
    return 0;
}
