#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    float t,z,i,a,b,n,n1,j;
    while(" ")
    {cin>>t;
        if(t==0)
           {
               return 0;}
        else{
                n=2;
                a=0;
            while(" ")
        {
            a=a+(1/n);
            if(a>=t)
            {
                cout<<n-1<<" card(s)"<<endl;
                break;
            }
            n++;
        }
        }
    }
    return 0;
}
