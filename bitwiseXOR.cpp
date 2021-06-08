#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        long long num = 1;
        if (k == 1)
        {
            num = n;
            cout << num;
        }
        else
        {
            while (num <= n)
            {
                num <<= 1;
            }
            num = num - 1;
            cout << num;
        }
        cout << endl;
    }
    return 0;
}