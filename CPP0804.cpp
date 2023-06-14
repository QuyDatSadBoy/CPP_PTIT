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
    freopen("VANBAN.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string tmp;
    set<string> se;
    while (cin >> tmp)
    {
        transform(all(tmp), tmp.begin(), ::tolower);
        se.insert(tmp);
    }
    for (auto it : se)
    {
        cout << it << endl;
    }
}
