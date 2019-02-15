#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,n,m,j;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>n>>m;
        if(n<4)
            cout<<min(4-n,m-n)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
