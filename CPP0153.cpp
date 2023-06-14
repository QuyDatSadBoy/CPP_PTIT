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
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        foru(i, 1, n)
        {
            sum += i % k;
        }
        cout << sum << endl;
    }
}