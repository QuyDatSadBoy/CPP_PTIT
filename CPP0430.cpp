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
        int n;
        cin >> n;
        set<int> se;
        int L = -1e9;
        int R = 1e9;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            se.insert(tmp);
            L = max(L, tmp);
            R = min(R, tmp);
        }
        cout << (L - R + 1) - se.size() << endl;
    }
}