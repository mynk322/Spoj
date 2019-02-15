#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,b,n,n1,j;
    cin>>t;
    llt a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    llt k=0,c=t;
    for(i=t-1;i>=0;i--)
    {
        if(a[i]==c)
        {
            k++;c--;
        }
    }
    cout<<t-k<<endl;
return 0;
}
