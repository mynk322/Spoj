#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,a,b,n,n1,j;
        cin>>n;
        while(n>1)
        {
            if(n%2==1)
            {
                cout<<"NIE";
                return 0;
            }
            n=n/2;
        }
        cout<<"TAK";
        return 0;
}
