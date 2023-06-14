#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct matrix
{
    ll F[2][2];
    friend matrix operator*(matrix a, matrix b)
    {
        matrix res;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                res.F[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    res.F[i][j] += a.F[i][k] * b.F[k][j];
                    res.F[i][j] %= mod;
                }
            }
        }
        return res;
    }
};
matrix powMod(matrix a, int n)
{
    if (n == 1)
        return a;
    matrix tmp = powMod(a, n / 2);
    if (n % 2)
        return tmp * tmp * a;
    else
        return tmp * tmp;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        matrix a;
        a.F[0][0] = 1;
        a.F[0][1] = 1;
        a.F[1][0] = 1;
        a.F[1][1] = 0;
        matrix res = powMod(a, n);
        cout << res.F[0][1] << endl;
    }
}
