#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    auto it = a.find(b);
    if (it != string ::npos)
    {
        a.erase(it, b.size() + 1);
    }
    cout << a << endl;
}
