#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
ll gt[21];
void init()
{
    gt[0] = 1;
    foru(i, 1, 20)
    {
        gt[i] = i * gt[i - 1];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n, R, G, B;
        cin >> n >> R >> G >> B;
        int remainder = n - R - G - B;
        ll res = 0;
        foru(i, 0, remainder)
        {
            foru(j, 0, remainder - i)
            {
                res += gt[n] / (gt[R + i] * gt[G + j] * gt[B + remainder - i - j]);
            }
        }
        cout << res << endl;
    }
}
