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
        int n = 
        int m = D % d;
        for (int i = 0; i < n; i++)
        {
            sum = sum + (p + i * q) * d;
        }

        sum = sum + (p + n * q) * m;

        cout << sum << endl;
    }
    return 0;
}
