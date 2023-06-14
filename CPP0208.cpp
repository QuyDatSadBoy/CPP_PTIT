#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        cout << v[k - 1] << endl;
    }
}
