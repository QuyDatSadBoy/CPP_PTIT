#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int a[25][25];
int n, k;
ll res;
void BackTrack(int i, int j, int sum)
{
    sum += a[i][j];
    if (sum == k && i == n - 1 && j == n - 1)
    {
        ++res;
    }
    if (i < n)
        BackTrack(i + 1, j, sum);
    if (j < n)
        BackTrack(i, j + 1, sum);
    sum -= a[i][j];
}
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
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        res = 0;
        BackTrack(0, 0, 0);
        cout << res << endl;
    }
}
