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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
    }
    sort(all(v));
    int j = 0;
    int hangdau = 0;
    int hangcuoi = n - 1;
    int cotdau = 0;
    int cotcuoi = n - 1;
    int res[100][100];
    while (hangdau <= hangcuoi)
    {
        for (int i = cotdau; i <= cotcuoi; i++)
        {
            res[hangdau][i] = v[j++];
        }
        ++hangdau;
        for (int i = hangdau; i <= hangcuoi; i++)
        {
            res[i][cotcuoi] = v[j++];
        }
        --cotcuoi;
        for (int i = cotcuoi; i >= cotdau; --i)
        {
            res[hangcuoi][i] = v[j++];
        }
        --hangcuoi;
        for (int i = hangcuoi; i >= hangdau; --i)
        {
            res[i][cotdau] = v[j++];
        }
        ++cotdau;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
}
