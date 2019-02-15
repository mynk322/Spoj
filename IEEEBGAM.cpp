#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,z,i,b,c,d;
    cin>>t;
    double x,n;
    for(z=0;z<t;z++)
    {
    cin>>n;
    x=(n-1)/n;
    x=x+1/((n+1)*n);
  std::cout << std::fixed;
  std::cout << std::setprecision(8)<<x<<endl;
    }
    return 0;
}
