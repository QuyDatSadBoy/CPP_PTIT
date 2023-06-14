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
        int n, p;
        cin >> n >> p;
        int legendre = 0;
        for (int i = p; i <= n; i *= p)
        {
            legendre += n / i;
        }
        cout << legendre << endl;
    }
}