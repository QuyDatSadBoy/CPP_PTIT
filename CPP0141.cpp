#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a))
#define all(v) v.begin(), v.end()

ll F[93];
void sinh()
{
    F[0] = 0;
    F[1] = 1;
    foru(i, 2, 92)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
}
int main()
{
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (binary_search(F, F + 93, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}