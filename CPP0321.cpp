#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool check(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    return a < b;
}
void hieu(string a, string b)
{
    // 100000
    // 000100
    if (check(a, b))
    {
        string tmp = b;
        b = a;
        a = tmp;
    }
    while (a.size() != b.size())
    {
        b = "0" + b;
    }
    int nho = 0;
    string res = "";
    ford(i, a.size() - 1, 0)
    {
        int tmp = (a[i] - '0') - (b[i] - '0') - nho;
        res = to_string((tmp + 10) % 10) + res;
        tmp < 0 ? nho = 1 : nho = 0;
    }
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
        hieu(a, b);
    }
}
