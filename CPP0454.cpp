#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void solve(ll a[], int n)
{
    ford(k, n - 1, 2)
    {
        int i = 0;
        int j = k - 1;
        while (i < j)
        {
            if (a[i] + a[j] == a[k])
            {
                cout << "YES" << endl;
                return;
            }
            else if (a[i] + a[j] > a[k])
            {
                --j;
            }
            else
            {
                ++i;
            }
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        sort(a, a + n);
        solve(a, n);
    }
}
