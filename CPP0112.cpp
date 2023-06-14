#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double res = 1.0 * sqrt((a - c) * (a - c) + (b - d) * (b - d));

        cout << fixed << setprecision(4) << res << endl;
    }
}