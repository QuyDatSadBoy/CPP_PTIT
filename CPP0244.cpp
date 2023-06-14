#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int n;
    cin >> n;
    set<int> se;
    foru(i, 1, n)
    {
        int tmp;
        cin >> tmp;
        se.insert(tmp);
    }
    for (auto x : se)
    {
        cout << x << ' ';
    }
}
