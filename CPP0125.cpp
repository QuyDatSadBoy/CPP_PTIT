#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int nt[1000006];
void sang()
{
    nt[0] = nt[1] = 0;
    foru(i, 2, sqrt(1000005))
    {
        if (nt[i])
        {
            for (ll j = i * i; j <= 1000005; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
int main()
{
    ms(nt, 1);
    sang();
    ll a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    foru(i, a + 1, b - 1)
    {
        if (nt[i])
            cout << i << ' ';
    }
}