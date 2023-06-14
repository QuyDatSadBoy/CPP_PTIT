#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
set<int> se;
int tong(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    return sum;
}
void sinh()
{
    se.insert(9);
    for (int i = 10; i < 1000; i++)
    {
        if (se.find(tong(to_string(i))) != se.end())
        {
            se.insert(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        if (se.find(tong(n)) != se.end())
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
