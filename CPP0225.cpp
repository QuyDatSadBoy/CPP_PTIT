#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int Max = 0;
    int hang[n] = {0};
    int cot[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            hang[i] += a[i][j];
        }
        Max = max(Max, hang[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cot[i] += a[j][i];
        }
        Max = max(Max, cot[i]);
    }
    int result = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        int dem = min(Max - hang[i], Max - cot[j]);
        a[i][j] += dem;
        hang[i] += dem;
        cot[i] += dem;
        result += dem;
        if (hang[i] == Max)
            ++i;
        if (cot[j] == Max)
            ++j;
    }
    cout << result << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
