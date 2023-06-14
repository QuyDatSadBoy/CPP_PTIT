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
        int r, c;
        cin >> r >> c;
        int a[105][105];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        int hangdau = 0;
        int hangcuoi = r - 1;
        int cotdau = 0;
        int cotcuoi = c - 1;
        while (1)
        {
            for (int i = cotdau; i <= cotcuoi; i++)
            {
                cout << a[hangdau][i] << ' ';
            }
            ++hangdau;
            if (hangdau > hangcuoi)
                break;
            for (int i = hangdau; i <= hangcuoi; i++)
            {
                cout << a[i][cotcuoi] << ' ';
            }
            --cotcuoi;
            if (cotcuoi < cotdau)
                break;
            for (int i = cotcuoi; i >= cotdau; --i)
            {
                cout << a[hangcuoi][i] << ' ';
            }
            --hangcuoi;
            if (hangcuoi < hangdau)
                break;
            for (int i = hangcuoi; i >= hangdau; i--)
            {
                cout << a[i][cotdau] << ' ';
            }
            ++cotdau;
            if (cotdau > cotcuoi)
                break;
        }
        cout << endl;
    }
}
