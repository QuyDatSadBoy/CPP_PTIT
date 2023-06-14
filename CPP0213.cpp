#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

ll F[92];
void sinh()
{
    F[0] = 0;
    F[1] = 1;
    foru(i, 2, 92)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (binary_search(F, F + 92, v[i]))
            {
                res.push_back(v[i]);
            }
        }
        for (auto &&i : res)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
}
