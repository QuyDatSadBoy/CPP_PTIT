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
    while (t--)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        map<string, int> mp;
        stringstream ss(a);
        string token;
        while (ss >> token)
        {
            mp[token] = 1;
        }
        stringstream ss2(b);
        while (ss2 >> token)
        {
            if (mp[token] == 1)
            {
                mp[token] = 2;
            }
        }
        for (auto &&i : mp)
        {
            if (i.second == 1)
            {
                cout << i.first << ' ';
            }
        }
        cout << endl;
    }
}
