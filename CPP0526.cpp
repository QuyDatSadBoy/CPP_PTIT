#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct sv
{
    string ten;
    string ns;
    int ngaysinh;
};

bool cmp(sv a, sv b)
{
    return a.ngaysinh > b.ngaysinh;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    sv a[105];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ten >> a[i].ns;
        stringstream ss(a[i].ns);
        string token;
        vector<string> v;
        while (getline(ss, token, '/'))
        {
            v.push_back(token);
        }
        string res = "";
        for (int i = v.size() - 1; i >= 0; --i)
        {
            res += v[i];
        }
        a[i].ngaysinh = stoi(res);
    }
    sort(a, a + n, cmp);
    cout << a[0].ten << endl;
    cout << a[n - 1].ten;
}
