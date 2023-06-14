#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
int nt[100005];
void ktao()
{
    fill(nt, 1);
}
void sang()
{
    nt[0] = nt[1] = 0;
    foru(i, 2, sqrt(100004))
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 100004; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ktao();
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        ll res = 0;
        int l, r;
        cin >> l >> r;
        foru(i, l, r)
        {
            if (nt[i])
            {
                ++res;
            }
        }
        cout << res << endl;
    }
}