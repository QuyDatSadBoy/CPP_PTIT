#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        foru(i, d, n - 1)
        {
            cout << a[i] << ' ';
        }
        foru(i, 0, d - 1)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}
