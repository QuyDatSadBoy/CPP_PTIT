#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int x, y, g;
void extended_gcd(int a, int m)
{
    if (m == 0)
    {
        x = 1;
        y = 0;
        g = a;
        return;
    }
    extended_gcd(m, a % m);
    int tmp = x;
    x = y;
    y = tmp - y * (a / m);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        foru(i, 1, n)
        {
            sum += i % k;
        }
        if (sum == k)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}