#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        int xa, xb;
        long int xA, xB;
        cin >> xa >> xb >> xA >> xB;

        int c1, c2;
        c1 = xA / xa;
        c2 = xB / xb;

        cout << c1 + c2 << endl;
    }
    return 0;
}
