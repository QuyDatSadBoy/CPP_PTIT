#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int chinh[505][505];
int phu[505][505];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    foru(i, 1, n) foru(j, 1, n)
    {
        cin >> chinh[i][j];
        phu[i][j] = chinh[i][j];
    }
    foru(i, 1, n)
    {
        foru(j, 1, n)
        {
            chinh[i][j] += chinh[i - 1][j - 1];
            phu[i][j] += phu[i - 1][j + 1];
        }
    }
    int res = -1e9;
    ford(i, n, 2)
    {
        ford(j, n, 2)
        {
            int hangdau = i - min(i, j);
            int cotdau = j - min(i, j);
            foru(k, 0, min(i, j) - 1)
            {
                res = max(res, (chinh[i][j] - chinh[hangdau + k][cotdau + k]) - (phu[i][cotdau + k + 1] - phu[hangdau + k][j + 1]));
            }
        }
    }
    cout << res << endl;
}
