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
        int k;
        cin >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int tmp;
                cin >> tmp;
                v.push_back(tmp);
            }
        }
        sort(all(v));
        cout << v[k - 1] << endl;
    }
}
