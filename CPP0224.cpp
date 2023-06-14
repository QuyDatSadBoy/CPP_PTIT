#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int r, c;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
void DFS(int a[][105], int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 < r && i1 >= 0 && j1 < c && j1 >= 0 && a[i1][j1] == 1)
        {
            DFS(a, i1, j1);
        }
    }
}
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
        cin >> r >> c;
        int a[105][105];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j])
                {
                    DFS(a, i, j);
                    ++cnt;
                }
            }
        }
        cout << cnt << endl;
    }
}
