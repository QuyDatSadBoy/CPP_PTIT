#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

bool check(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        if ((s[i] - '0') % 2 != 0 || (s[j] - '0') % 2 != 0)
            return false;
        ++i;
        --j;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    foru(i, 1, n)
    {
        string s;
        cin >> s;
        if (check(s))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}