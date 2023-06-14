#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    int demA = 0;
    int demB = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            demA > demB ? demB++ : demB = demA + 1;
        }
        else
        {
            demB > demA ? demA++ : demA = demB + 1;
        }
    }
    cout << demA << endl;
}
