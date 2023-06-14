#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n - 86) % 100 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}