#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n + 1; i++)
        {
            a[i] = a[i] + a[i - 1];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << a[r] - a[l - 1] << endl;
        }
    }
}
