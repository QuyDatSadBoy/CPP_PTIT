#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int c[1005][1005];
void tohop()
{
    for (int i = 0; i < 1005; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
                c[i][j] %= mod;
            }
        }
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    tohop();
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        cout << c[n][r] << endl;
    }
}
