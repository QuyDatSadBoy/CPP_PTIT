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
        int n;
        cin >> n;
        int a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll sum2 = a[0];
        bool check = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (sum - a[i] == 2 * sum2)
            {
                cout << i + 1 << endl;
                check = true;
                break;
            }
            sum2 += a[i];
        }
        if (check == false)
            cout << -1 << endl;
    }
}
