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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int tmp;
        int chan = 0, le = 0;
        char ktu = ' ';
        while (ktu != '\n')
        {
            cin >> tmp;
            if (tmp % 2 == 0)
            {
                chan++;
            }
            else
            {
                le++;
            }
            ktu = getchar();
        }
        if ((chan + le) % 2 == 0 && chan > le)
        {
            cout << "YES" << endl;
        }
        else if ((chan + le) % 2 == 1 && le > chan)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}