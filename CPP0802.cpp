#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

ll calc(string tmp)
{
    if (tmp.size() >= 11)
        return 0;
    for (int i = 0; i < tmp.size(); i++)
    {
        if (!isdigit(tmp[i]))
        {
            return 0;
        }
    }
    ll res = stoll(tmp);
    if (res > 2147483647)
        return 0;
    else
        return res;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    freopen("DATA.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string tmp;
    ll sum = 0;
    while (cin >> tmp)
    {
        sum += calc(tmp);
    }
    cout << sum;
}
