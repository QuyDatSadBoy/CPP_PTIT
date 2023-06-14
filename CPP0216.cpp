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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l, r;
        cin >> l >> r;
        vector<int> tmp(v.begin() + l, v.begin() + r + 1);
        string res = "";
        for (int i = 1; i < tmp.size(); i++)
        {
            if (tmp[i] > tmp[i - 1])
                res += "1";
            else if (tmp[i] < tmp[i - 1])
                res += "0";
        }
        if (res.find("01") != string::npos)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
