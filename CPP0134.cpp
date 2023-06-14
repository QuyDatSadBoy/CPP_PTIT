#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

void phanTich(int n, int k)
{
    int cnt = 0;
    foru(i, 2, sqrt(n))
    {
        while (n % i == 0)
        {
            n /= i;
            ++cnt;
            if (cnt == k)
            {
                cout << i;
                return;
            }
        }
    }
    if (n != 1)
        ++cnt;
    if (cnt == k)
    {
        cout << n;
    }
    else
    {
        cout << -1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        phanTich(n, k);
        cout << endl;
    }
}