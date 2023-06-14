#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct Point
{
    int x, y;
};

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
        Point a[1005];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].x >> a[i].y;
        }
        a[n].x = a[0].x;
        a[n].y = a[0].y;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i].x * a[i + 1].y - a[i + 1].x * a[i].y;
        }
        cout << fixed << setprecision(3) << sum / 2.0 << endl;
    }
}
