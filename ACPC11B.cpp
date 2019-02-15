#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z,n,i;
    cin>>t;
    long int n1,n2;
    for(z=0;z<t;z++)
    {
        cin>>n1;
        int a1[n1],c1;
        long long int c=1000000;
        for(i=0;i<n1;i++)
        {
            cin>>a1[i];
        }
        sort(a1,a1+n1);
        cin>>n2;
        int a2[n2];
        for(i=0;i<n2;i++)
        {
            cin>>a2[i];
        }
        sort(a2,a2+n1);
        if(n1>n2)
        {
         for(i=0;i<n2;i++)
        {int l=0,h=n1-1,m;c1=0;
            while(l<h)
            {m=(l+h)/2;
                if(a1[m]>a2[i])
                    l=m+1;
                else if(a1[m]<a2[i])
                    h=m-1;
                else
                {
                    c1=1;
                    break;
                }
            }
                if(c1==1)
                {
                    cout<<0<<endl;
                break;
                }else
                {
                    if((a1[m]-a2[i])>0)
                       {
                    if((a1[m]-a2[i])<c)
                           c=a1[m]-a2[i];
                       }
                       else
                        {
                            if((a2[i]-a1[m])<c)
                                c=a2[i]-a1[m];
                        }
                }


        }if(c1==0)
                        cout<<c<<endl;
        }
        else
            for(i=0;i<n1;i++)
        {int l=0,h=n2-1,m,c1=0;
            while(l<h)
            {m=(l+h)/2;
                if(a2[m]>a1[i])
                    l=m+1;
                else if(a2[m]<a1[i])
                    h=m-1;
                else
                {
                    c1=1;
                    break;
                }
            }
                if(c1==1)
                    {cout<<0<<endl;
                    break;
                    }
                else
                {
                    if((a2[m]-a1[i])>0)
                       {
                    if((a2[m]-a1[i])<c)
                           c=a2[m]-a1[i];
                       }
                       else
                        {
                            if((a1[i]-a2[m])<c)
                                c=a1[i]-a2[m];
                        }
                }
            }
if(c1==0)
                cout<<c<<endl;

    }
    return 0;
}
