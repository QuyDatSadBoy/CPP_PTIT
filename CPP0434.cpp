#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

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
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        b[0] = a[0] * a[1];
        b[n - 1] = a[n - 1] * a[n - 2];
        foru(i, 1, n - 2)
        {
            b[i] = a[i - 1] * a[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << ' ';
        }
        cout << endl;
    }
}
