#include <bits/stdc++.h>
#include <cmath>
using namespace std;
bool is_square(long long S)
{
    long long root = sqrt(S);
    return root * root == S;
}
int main()
{
    int t, S = 0, n;
    cin >> t >> n;
    while (t--)
    {
        int a[n];

        for (int i = 0; i < n; i++)
        {
            S = S + a[i];
        }
        if (is_square(S))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}