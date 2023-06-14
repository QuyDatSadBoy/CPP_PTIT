#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        int a[101][101];
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[101][101] = {0};
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (a[i][j] == 1)
                {
                    for (int k = 1; k <= c; k++)
                    {
                        b[i][k] = 1;
                    }
                    for (int k = 1; k <= r; k++)
                    {
                        b[k][j] = 1;
                    }
                }
            }
        }
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cout << b[i][j] << ' ';
            }
            cout << endl;
        }
    }
}
