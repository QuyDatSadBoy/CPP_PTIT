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
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        foru(i, 1, n)
        {
            int tmp;
            cin >> tmp;
            mp[tmp]++;
        }
        int sum = 0;
        for (auto it : mp)
        {
            if (it.second != 1)
            {
                sum += it.second;
            }
        }
        cout << sum << endl;
    }
}
