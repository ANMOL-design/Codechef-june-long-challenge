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
        long long int n = D / d;
        long long int m = D % d;

        long int sum = 0;
        if (m == 0)
        {
            sum = p * d * n + (q * d * (n - 1) * n) / 2;
        }
        else
        {
            sum = p * d * n + (q * d * (n - 1) * n) / 2 + (p + n * q) * m;
        }

        cout << sum << endl;
    }

    return 0;
}