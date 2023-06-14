#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
ll gcd(ll b, ll a)
{
    if (a == 0)
        return b;
    else
        return gcd(a, b % a);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        string b;
        cin >> a >> b;
        ll res = 0;
        for (int i = 0; i < b.size(); i++)
        {
            res = res * 10 + b[i] - '0';
            res %= a;
        }
        cout << gcd(res, a) << endl;
    }
}
