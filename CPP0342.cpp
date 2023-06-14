#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

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
        string s;
        cin >> s;
        multiset<char> ms;
        ll sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (!isdigit(s[i]))
            {
                ms.insert(s[i]);
            }
            else
            {
                sum += s[i] - '0';
            }
        }
        for (auto &&i : ms)
        {
            cout << i;
        }
        cout << sum << endl;
    }
}
