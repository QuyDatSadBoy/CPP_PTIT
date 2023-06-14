#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int main()
{
    int n;
    cin >> n;
    foru(i, 2, sqrt(n))
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                ++cnt;
            }
            cout << i << ' ' << cnt << endl;
        }
    }
    if (n != 1)
        cout << n << ' ' << 1 << endl;
}