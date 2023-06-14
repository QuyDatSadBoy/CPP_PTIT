#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int cnt = 0;
        string word;
        while (ss >> word)
        {
            ++cnt;
        }
        cout << cnt << endl;
    }
}
