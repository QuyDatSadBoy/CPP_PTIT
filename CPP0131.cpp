#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int a[10004];
void ktao()
{
    foru(i, 1, 10000)
    {
        a[i] = i;
    }
}
void sinh()
{
    foru(i, 2, sqrt(10000))
    {
        for (ll j = i * i; j <= 10000; j += i)
        {
            if (a[j] == j)
            {
                a[j] = i;
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
        int n;
        cin >> n;
        foru(i, 1, n)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}