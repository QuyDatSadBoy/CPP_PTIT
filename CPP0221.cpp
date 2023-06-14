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
    ll t;
    cin >> t;
    while (t--)
    {
        ll r, c;
        cin >> r >> c;
        ll a[r][c];
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        ll hangdau = 0;
        ll hangcuoi = r - 1;
        ll cotdau = 0;
        ll cotcuoi = c - 1;
        while (hangdau < hangcuoi && cotdau < cotcuoi)
        {
            ll pre = a[hangdau + 1][cotdau];
            for (ll i = cotdau; i <= cotcuoi; i++)
            {
                ll tmp = a[hangdau][i];
                a[hangdau][i] = pre;
                pre = tmp;
            }
            ++hangdau;
            if (hangdau > hangcuoi)
                break;
            for (ll i = hangdau; i <= hangcuoi; i++)
            {
                ll tmp = a[i][cotcuoi];
                a[i][cotcuoi] = pre;
                pre = tmp;
            }
            --cotcuoi;
            if (cotcuoi < cotdau)
                break;
            for (ll i = cotcuoi; i >= cotdau; --i)
            {
                ll tmp = a[hangcuoi][i];
                a[hangcuoi][i] = pre;
                pre = tmp;
            }
            --hangcuoi;
            if (hangcuoi < hangdau)
                break;
            for (ll i = hangcuoi; i >= hangdau; i--)
            {
                ll tmp = a[i][cotdau];
                a[i][cotdau] = pre;
                pre = tmp;
            }
            ++cotdau;
            if (cotdau > cotcuoi)
                break;
        }
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cout << a[i][j] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
