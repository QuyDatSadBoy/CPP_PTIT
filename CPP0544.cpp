#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
#define PI 3.141592653589793238
const int mod = 1e9 + 7;

struct point
{
    double a, b;
    double distance(point orther)
    {
        return sqrt(pow(a - orther.a, 2) + pow(b - orther.b, 2));
    }
};
void solve(point x, point y, point z)
{
    double x1 = x.distance(y), x2 = x.distance(z), x3 = y.distance(z);
    if (x1 <= 0 || x2 <= 0 || x3 <= 0 || x1 + x2 <= x3 || x2 + x3 <= x1 || x1 + x3 <= x2)
    {
        cout << "INVALID" << endl;
        return;
    }
    double p = (x1 + x2 + x3) / 2;
    double s1 = sqrt(p * (p - x1) * (p - x2) * (p - x3));
    double r = (x1 * x2 * x3) / (4 * s1);
    double s2 = PI * r * r;
    cout << fixed << setprecision(3) << s2 << endl;
    return;
}
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
        point x, y, z;
        cin >> x.a >> x.b >> y.a >> y.b >> z.a >> z.b;
        solve(x, y, z);
    }
}
