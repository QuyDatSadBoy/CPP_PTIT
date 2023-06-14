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
    while (t--)
    {
        string s;
        cin >> s;
        s = "@" + s;
        stack<int> st;
        string res = "";
        for (int i = 1; i <= s.size(); i++)
        {
            st.push(i);
            if (s[i] == 'I' || i == s.size())
            {
                while (!st.empty())
                {
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << res << endl;
    }
}
