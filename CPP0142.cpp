#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a))
#define all(v) v.begin(), v.end()

bool nt(int n)
{
    foru(i, 2, sqrt(n))
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int cnt = 0;
        foru(i, 1, x)
        {
            if (__gcd(i, x) == 1)
            {
                ++cnt;
            }
        }
        if (nt(cnt))
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
}