#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,a,b,n,n1,j;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>n;
        vector <llt> p;b=0;
        for(i=0;i<n;i++)
            {
                cin>>a;
                p.push_back(a);
                b=b+a;
            }
            llt c=b%n;
            if(c==0)
                cout<<n<<endl;
            else
                cout<<n-1<<endl;
//
//            sort(p.begin(),p.end());
//             i=0;j=n-1;
//            while(i<j)
//            {
//                if(b-p[i]>p[j]-b)
//                {
//                    p[i]=p[i]+p[j]-b;
//                    p[j]=b;
//                    j--;
//                }
//                if((b-p[i])<(p[j]-b))
//                {
//                    p[j]=p[j]+p[i]-b;
//                    p[i]=b;
//                    i++;
//                }
//                if(p[j]==b)
//                    j--;
//                if(p[i]==b)
//                    i++;
//                    if(p[i]==p[j])
//                        break;
//            }llt cc=0;
//            for(i=0;i<n;i++)
//            {
//                if(p[i]==b)
//                    cc++;
//            }
    }
    return 0;
}
