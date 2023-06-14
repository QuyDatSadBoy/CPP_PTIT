#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int n, m;
char a[405][405];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
void solve(int i, int j)
{
    a[i][j] = '*';
    for (int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 'O')
        {
            solve(i1, j1);
        }
    }
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
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (a[0][i] == 'O')
            {
                solve(0, i);
            }
            if (a[n - 1][i] == 'O')
            {
                solve(n - 1, i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] == 'O')
            {
                solve(i, 0);
            }
            if (a[i][m - 1] == 'O')
            {
                solve(i, m - 1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '*')
                {
                    cout << 'O' << ' ';
                }
                else
                {
                    cout << 'X' << ' ';
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
