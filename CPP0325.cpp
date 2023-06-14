#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

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
        ll sum = 0;
        string s;
        cin >> s;
        for (ll i = 0; i < s.size(); i++)
        {
            sum = sum * 10 + s[i] - '0';
            sum %= 11;
        }
        sum == 0 ? cout << 1 : cout << 0;
        cout << endl;
    }
}