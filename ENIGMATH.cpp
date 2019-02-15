#include <bits/stdc++.h>
using namespace std;
#define llt long long int

llt GCD(llt A, llt B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main() {
    llt t,z,i,a,b,n;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>a>>b;
        n=GCD(a,b);
        cout<<b/n<<" "<<a/n<<endl;
        }
        return 0;
        }
