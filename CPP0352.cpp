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
    cin.ignore();
    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        stringstream ss(s);
        string token;
        vector<string> v;
        int cnt = 0;
        while (ss >> token)
        {
            v.push_back(token);
            ++cnt;
        }
        string res = "";
        res += v[cnt - 1];
        for (int i = 0; i < cnt - 1; i++)
        {
            res += v[i][0];
        }
        mp[res]++;
        if (mp[res] > 1)
        {
            res += to_string(mp[res]);
        }
        res += "@ptit.edu.vn";
        cout << res << endl;
    }
}
