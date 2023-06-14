#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        vector<char> v;
        for (auto c : s)
        {
            mp[c]++;
            v.push_back(c);
        }
        for (auto c : v)
        {
            if (mp[c] == 1)
            {
                cout << c;
            }
        }
        cout << endl;
    }
}
