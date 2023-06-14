#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a))
#define all(v) v.begin(), v.end()

vector<ll> v;
bool nt(ll n)
{
    foru(i, 2, sqrt(n))
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
void sinh()
{
    foru(i, 2, 100)
    {
        ll x = 1ll * (pow(2, i) - 1);
        ll y = 1ll * (pow(2, i - 1));
        if (nt(x))
        {
            v.push_back(x * y);
        }
    }
}
int main()
{
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << binary_search(all(v), n) << endl;
    }
}