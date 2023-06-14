#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

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
        ll n;
        cin >> n;
        vector<long long> v;
        for (ll i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        ll cnt = 0;
        for (auto &&i : v)
        {
            if (i != 0)
            {
                cout << i << ' ';
            }
            else
            {
                ++cnt;
            }
        }
        foru(i, 1, cnt)
        {
            cout << 0 << ' ';
        }
        cout << endl;
    }
}