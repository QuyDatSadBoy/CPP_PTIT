#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        multiset<int> ms;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int tmp;
                cin >> tmp;
                ms.insert(tmp);
            }
        }
        for (auto &&i : ms)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
}