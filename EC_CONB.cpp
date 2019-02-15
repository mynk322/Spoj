#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z;
    cin>>t;
    for(z=0;z<t;z++)
    {long long int a,c=0,d=0,j;
   cin>>a;
   if(a%2==0)
   {
   int b[24];
   while(a>0)
   {
       if(a%2==1)
        b[c]=1;
        else
            b[c]=0;
       c++;
       a/=2;
   }
   int i;
   for(i=0;i<c;i++)
   {
       if(b[i]==1)
        d=i;
   }c=0;j=1;
   for(i=d;i>=0;i--)
   {
       c=c+j*b[i];
       j*=2;
   }
cout<<c<<endl;
   }
else
    cout<<a<<endl;
}
    return 0;
}

