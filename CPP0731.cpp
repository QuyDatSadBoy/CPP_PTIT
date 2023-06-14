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
        int i = 0, idx = 0, res = 0;
        while (i < n)
        {
            int sum = INT_MIN;
            if (i + a[i] >= n - 1)
            {
                ++res;
                break;
            }
            for (int j = i + 1; j <= i + a[i]; j++)
            {
                if (j + a[j] >= sum)
                {
                    sum = j + a[j];
                    idx = j;
                }
            }
            i = idx;
            ++res;
        }
        cout << res << endl;
    }
}
