#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,b,n,n1,j;
    while(" ")
    {cin>>t;
    if(t==0)
        return 0;
    llt a,s=0;
    vector<pair <llt,llt> > p;
    vector<pair <llt,llt> > q;
    llt c=0;b=0;
    for(i=0;i<t;i++)
    {
        cin>>a;
        if(a>=0){
            p.push_back(make_pair(i,a));b++;}
        else
        {
            a=-1*a;
            c++;
            q.push_back(make_pair(i,a));
    }}
//    for(i=0;i<b;i++)
//        cout<<p[i].first<<" "<<p[i].second<<endl;
//    cout<<"/////";
//    for(i=0;i<c;i++)
//        cout<<q[i].first<<" "<<q[i].second<<endl;
//    cout<<"///////";
    llt j=0,x,ans=0;i=0;
    while(1)
    {
        if(i==b-1&&j==c-1)
            break;
        if(p[i].second==0&&i<b)
            i++;
        if(q[j].second==0&&j<c)
            j++;
        x=q[j].second;
        if(x>p[i].second)
        {
            q[j].second=x-p[i].second;
            ans+=(p[i].second)*abs(p[i].first-q[j].first);
            p[i].second=0;
        }
        if(x<=p[i].second)
        {
            q[j].second=0;
            p[i].second=p[i].second-x;
            ans+=(x)*abs(p[i].first-q[j].first);
        }
    }
        cout<<ans<<endl;
}
return 0;
}
