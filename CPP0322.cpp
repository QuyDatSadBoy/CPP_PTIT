#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

void tong(string a, string b)
{
    string res = "";
    while (a.size() < b.size())
    {
        a = "0" + a;
    }
    while (b.size() < a.size())
    {
        b = "0" + b;
    }
    int nho = 0;
    int len = a.size();
    ford(i, len - 1, 0)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + nho;
        res = to_string(tmp % 10) + res;
        nho = tmp / 10;
    }
    if (nho != 0)
        res = to_string(nho) + res;
    cout << res << endl;
}

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
        string a, b;
        cin >> a >> b;
        tong(a, b);
    }
}
