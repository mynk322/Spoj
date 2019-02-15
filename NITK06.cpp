#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
    llt t, z, i, a, b, n, n1, j;
    cin >> t;
    for (z = 0; z < t; z++)
    {
        cin >> n;
        llt a[n], b[n];
        llt s = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        llt po = -1;
        for (i = 0; i < n - 1; i++)
        {
            if ((a[i + 1] - a[i]) < 0)
            {
                cout << "NO" << endl;
                po = 0;
                break;
            }
            else
            {
                a[i + 1] -= a[i];
                a[i] = 0;
            }
        }
        if (po != 0 && a[n - 1] == 0)
            cout << "YES" << endl;
        if (a[n - 1] != 0 && po != 0)
            cout << "NO" << endl;
    }
    return 0;
}
