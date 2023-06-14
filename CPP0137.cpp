#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int nt[1000006];
void ktao()
{
    ms(nt, 1);
}
void sinh()
{
    nt[0] = nt[1] = 0;
    foru(i, 2, sqrt(1000000))
    {
        if (nt[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
int main()
{
    ktao();
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll begin = ceil(1ll * sqrt(l));
        ll end = 1ll * sqrt(r);
        ll cnt = 0;
        foru(i, begin, end)
        {
            if (nt[i])
            {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}