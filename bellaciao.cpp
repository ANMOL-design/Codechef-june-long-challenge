#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int D, d, p, q;
        cin >> D >> d >> p >> q;
        int sum = 0;
        int n = D / d;
        {
            if (n * d < D)
            {
                n = n + D % d;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            sum = (p + n * q) * d;
        }

        cout << sum << endl;
    }
    return 0;
}