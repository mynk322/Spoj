#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z,n,i;
    cin>>t;
    long int n1,n2;
    for(z=0;z<t;z++)
    {
        cin>>n1>>n2;
        int g[n1],m[n2];
        for(i=0;i<n1;i++)
            cin>>g[i];
        for(i=0;i<n2;i++)
            cin>>m[i];
            sort(g,g+n1);
            sort(m,m+n2);
            int c1=0,c2=0;
            while(c1<n1&&c2<n2)
            {
                if(g[c1]>=m[c2])
                    c2++;
                else if(g[c1]<m[c2])
                    c1++;
            }
            if(c1==n1)
                cout<<"MechaGodzilla"<<endl;
            else
                cout<<"Godzilla"<<endl;
    }
    return 0;
}
