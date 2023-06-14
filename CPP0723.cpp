#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

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
        string a;
        cin >> n >> a;
        string res = "";
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '0' || a[i] == '1')
            {
                continue;
            }
            else if (a[i] == '4')
            {
                res += "322";
            }
            else if (a[i] == '6')
            {
                res += "53";
            }
            else if (a[i] == '8')
            {
                res += "7222";
            }
            else if (a[i] == '9')
            {
                res += "7332";
            }
            else
            {
                res += a[i];
            }
        }
        sort(all(res), greater<char>());
        cout << res << endl;
    }
}