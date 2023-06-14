#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m, n, a, b;
        cin >> m >> n >> a >> b;
        ll cnt = 0;
        foru(i, m, n)
        {
            int x = i % a;
            int y = i % b;
            if (x == 0)
            {
                ++cnt;
            }
            if (y == 0)
            {
                ++cnt;
            }
            if (x == 0 && y == 0)
            {
                --cnt;
            }
        }
        cout << cnt << endl;
    }
}