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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        vector<ii> v;
        ii tmp;
        int nhap;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tmp.first = abs(a[i] - x);
            tmp.second = i;
            v.push_back(tmp);
        }
        sort(all(v), [](ii a, ii b) -> bool
             {
            if(a.first!=b.first)
            {
                return a.first<b.first;
            }
            return a.second<b.second; });
        for (auto &&i : v)
        {
            cout << a[i.second] << ' ';
        }
        cout << endl;
    }
}
