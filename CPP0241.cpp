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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int r = n - 1;
        int cnt = 0;
        while (l < r)
        {
            if (a[l] == a[r])
            {
                ++l;
                --r;
            }
            else if (a[l] > a[r])
            {
                --r;
                a[r] += a[r + 1];
                ++cnt;
            }
            else
            {
                ++l;
                a[l] += a[l - 1];
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}
