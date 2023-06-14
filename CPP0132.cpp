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
        ll n;
        cin >> n;
        ll res;
        foru(i, 2, sqrt(n))
        {
            if (n % i == 0)
            {
                res = i;
                while (n % i == 0)
                {
                    n /= i;
                }
            }
        }
        if (n != 1)
            res = n;
        cout << res << endl;
    }
}