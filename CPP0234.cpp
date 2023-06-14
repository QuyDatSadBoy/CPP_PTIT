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
        int n, m, k;
        cin >> n >> m >> k;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> res;
        int hangDau = 0;
        int hangCuoi = n - 1;
        int cotDau = 0;
        int cotCuoi = m - 1;
        while (hangDau <= hangCuoi && cotDau <= cotCuoi)
        {
            for (int i = cotDau; i <= cotCuoi; i++)
            {
                res.push_back(a[hangDau][i]);
            }
            ++hangDau;
            if (hangDau > hangCuoi)
                break;
            for (int i = hangDau; i <= hangCuoi; i++)
            {
                res.push_back(a[i][cotCuoi]);
            }
            --cotCuoi;
            if (cotCuoi < cotDau)
                break;
            for (int i = cotCuoi; i >= cotDau; --i)
            {
                res.push_back(a[hangCuoi][i]);
            }
            --hangCuoi;
            if (hangCuoi < hangDau)
                break;
            for (int i = hangCuoi; i >= hangDau; --i)
            {
                res.push_back(a[i][cotDau]);
            }
            ++cotDau;
            if (cotDau > cotCuoi)
                break;
        }
        cout << res[k - 1] << endl;
    }
}
