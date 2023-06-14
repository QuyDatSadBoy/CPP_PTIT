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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        int kytu[26];
        int len = s.size();
        int res = 0;
        for (int i = 0; i < len; i++)
        {
            int cnt = 0;
            fill(kytu, 0);
            for (int j = i; j < len; j++)
            {
                int x = s[j] - 'a';
                if (kytu[x] == 0)
                {
                    ++cnt;
                    ++kytu[x];
                }
                if (cnt == k)
                    ++res;
                if (cnt > k)
                    break;
            }
        }
        cout << res << endl;
    }
}
