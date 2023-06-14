#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void solve(string a, string b)
{
    int cnt2[26] = {0};
    int left, right, len = INT_MAX;
    for (int i = 0; i < b.size(); i++)
    {
        cnt2[b[i] - 'a']++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        int cnt1[26] = {0};
        for (int j = i; j < a.size(); j++)
        {
            cnt1[a[j] - 'a']++;
            bool check = true;
            for (int k = 0; k < 26; k++)
            {
                if (cnt1[k] < cnt2[k])
                {
                    check = false;
                    break;
                }
            }
            if (check == true && len > j - i + 1)
            {
                len = j - i + 1;
                left = i;
                right = j;
            }
        }
    }
    if (len == INT_MAX)
        cout << -1 << endl;
    else
    {
        for (int i = left; i <= right; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}
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
        string a, b;
        cin >> a >> b;
        solve(a, b);
    }
}
