#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int uoc[10001];
void ktao()
{
    foru(i, 0, 10000)
    {
        uoc[i] = i;
    }
}
void sang()
{
    foru(i, 2, sqrt(10000))
    {
        for (ll j = i * i; j <= 10000; j += i)
        {
            if (uoc[j] == j)
            {
                uoc[j] = i;
            }
        }
    }
}
int main()
{
    ktao();
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        foru(i, 1, n)
        {
            cout << uoc[i] << ' ';
        }
        cout << endl;
    }
}