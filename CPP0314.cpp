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
    int n;
    cin >> n;
    int res = 1;
    cin.ignore();
    string s[n];
    foru(i, 0, n - 1)
    {
        getline(cin, s[i]);
    }
    sort(s, s + n);
    foru(i, 0, n - 2)
    {
        if (s[i] != s[i + 1])
            ++res;
    }
    cout << res << endl;
}