
#include <bits/stdc++.h>//WA
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,a,b,n;
    cin>>t;
    for(z=0;z<t;z++)
    {
    vector <pair <long,long> > p;
        cin>>a;
        int x[a],s=0,cc;
        for(i=0;i<a;i++)
        {
            cin>>x[i];
            long aa=0,ab=x[i];
            while(ab>0)
            {
                if(ab%2==1)
                    aa++;
                ab/=2;
            }
        p.push_back(make_pair(aa,x[i]));
        }
        sort(p.begin(),p.end());
        long cc1=0;
        for(i=a-1;i>=0;i--)
        {
            if(p[i].first!=p[a-1].first)
                {
                    cc1=i;break;
                }
        }
        cout<<a-cc1-1<<endl<<endl;
        for(i=a-1;i>=cc1+1;i--)
        {
        cout<<p[i].second<<" ";
        }cout<<endl<<endl;

    }
    return 0;
}
