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
        char c;
        cin >> c;
        if (islower(c))
        {
            cout << (char)(c - 32);
        }
        else
        {
            cout << (char)(c + 32);
        }
        cout << endl;
    }
    return 0;
}