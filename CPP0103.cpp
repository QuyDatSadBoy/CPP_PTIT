#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
int main()
{
    int n;
    cin >> n;
    double res = 0;
    foru(i, 1, n)
    {
        res += 1.0 / i;
    }
    cout << fixed << setprecision(4) << res << endl;
}