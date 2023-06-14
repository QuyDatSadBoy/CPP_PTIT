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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        multiset<int> ms;
        for (int i = 0; i < k; i++)
        {
            ms.insert(a[i]);
        }
        auto it = ms.rbegin();
        cout << *it << ' ';
        for (int i = k; i < n; i++)
        {
            ms.erase(ms.find(a[i - k]));
            ms.insert(a[i]);
            it = ms.rbegin();
            cout << *it << ' ';
        }
        cout << endl;
    }
}
