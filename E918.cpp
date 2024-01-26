#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll sum = 0;
        map<ll, ll> m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 == 1)
            {
                sum += a;
            }
            else
            {
                sum -= a;
            }
                m[sum]++;

        }
        if (m.size() != n || m.count(0))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}