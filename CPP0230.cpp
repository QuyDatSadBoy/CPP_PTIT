#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int n;
    cin >> n;
    int a[n][3];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                ++cnt;
        }
        if (cnt >= 2)
            ++res;
    }
    cout << res << endl;
}
