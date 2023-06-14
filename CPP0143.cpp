#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

ll f[93];
void sinh()
{
    f[0] = 0;
    f[1] = 1;
    foru(i, 2, 92)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}
int main()
{
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}