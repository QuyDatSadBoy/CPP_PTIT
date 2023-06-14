#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int n, m;
int a[1005][1005];
struct Point
{
    int x, y;
};
int solve(Point start, Point end)
{
    if (a[start.x][start.y] == 0 || a[end.x][end.y] == 0)
        return -1;
    queue<pair<Point, int>> q;
    q.push({start, 0});
    while (!q.empty())
    {
        pair<Point, int> top = q.front();
        q.pop();
        Point cur = top.first;
        if (cur.x == end.x && cur.y == end.y)
        {
            return top.second;
        }
        for (int k = 0; k < 4; k++)
        {
            int i = cur.x + dx[k];
            int j = cur.y + dy[k];
            if (a[i][j] == 1 && i >= 0 && i < n && j >= 0 && j < m)
            {
                a[i][j] = 0;
                pair<Point, int> tmp = {{i, j}, top.second + 1};
                q.push(tmp);
            }
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, z, t;
        cin >> n >> m >> x >> y >> z >> t;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << solve({x, y}, {z, t}) << endl;
    }
}
