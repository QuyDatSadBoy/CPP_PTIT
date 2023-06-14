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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> F1(n, 1), F2(n, 1);
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    F1[i] = max(F1[i], F1[j] + 1);
                }
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = n - 1; j > i; --j)
            {
                if (a[i] > a[j])
                {
                    F2[i] = max(F2[i], F2[j] + 1);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, F1[i] + F2[i] - 1);
        }
        cout << ans << endl;
    }
}
