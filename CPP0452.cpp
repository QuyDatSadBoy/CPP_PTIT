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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        vector<ll> a(n1), b(n2), c(n3);
        for (int i = 0; i < n1; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n2; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n3; i++)
        {
            cin >> c[i];
        }
        int i = 0, j = 0, k = 0;
        bool check = false;
        while (i < n1 && j < n2 && k < n3)
        {
            if (a[i] == b[j] && a[i] == c[k])
            {
                cout << a[i] << ' ';
                check = true;
                ++i;
                ++j;
                ++k;
            }
            else if (a[i] < b[j] || a[i] < c[k])
            {
                ++i;
            }
            else if (b[j] < a[i] || b[j] < c[k])
            {
                ++j;
            }
            else
            {
                ++k;
            }
        }
        if (check == false)
            cout << -1;
        cout << endl;
    }
}
