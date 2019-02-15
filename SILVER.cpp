#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
    llt t, z, i, b, n, n1, j;
    while (" ")
    {
        cin >> t;
        if (t == 0)
            return 0;
        else
        {
            int x = 0, ss;
            while (1)
            {
                ss = pow(2, x);
                if (t < ss)
                {
                    cout << max(x - 1, 0) << endl;
                    break;
                }
                x++;
            }
        }
    }
    return 0;
}
