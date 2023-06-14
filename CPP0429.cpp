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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, k, b;
    cin >> n >> k >> b;
    int a[n + 1];
    foru(i, 1, n)
    {
        a[i] = i;
    }
    for (int i = 0; i < b; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp] = 0;
    }
    int cnt = 0;
    foru(i, 1, k)
    {
        if (a[i] == 0)
        {
            ++cnt;
        }
    }
    int res = cnt;
    foru(i, k + 1, n)
    {
        if (a[i - k] == 0)
            --cnt;
        if (a[i] == 0)
            ++cnt;
        res = min(res, cnt);
    }
    cout << res << endl;
}
