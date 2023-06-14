#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
char a[100][100];
bool check(int i, int j, int k)
{
    for (int x = i; x < i + k; x++)
    {
        if (a[x][j] == 'O' || a[x][j + k - 1] == 'O')
        {
            return 0;
        }
    }
    for (int x = j; x < j + k; x++)
    {
        if (a[i][x] == 'O' || a[i + k - 1][x] == 'O')
        {
            return 0;
        }
    }
    return 1;
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
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int k = n; k >= 1; k--)
        {
            bool ok = false;
            for (int i = 0; i <= n - k; i++)
            {
                for (int j = 0; j <= n - k; j++)
                {
                    if (check(i, j, k))
                    {
                        ok = true;
                        break;
                    }
                }
                if (ok == true)
                {
                    break;
                }
            }
            if (ok == true)
            {
                cout << k << endl;
                break;
            }
        }
    }
    return 0;
}
