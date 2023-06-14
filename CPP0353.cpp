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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    string a[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    while (t--)
    {
        string s;
        cin >> s;
        transform(all(s), s.begin(), ::tolower);
        string res = "";
        for (char x : s)
        {
            for (int i = 0; i < 10; i++)
            {
                if (a[i].find(x) != string::npos)
                {
                    res += to_string(i);
                    break;
                }
            }
        }
        string t = res;
        reverse(all(t));
        if (t == res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
