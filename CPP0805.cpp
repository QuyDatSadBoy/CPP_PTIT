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
    ifstream f1("DATA1.in");
    ifstream f2("DATA2.in");
    set<string> s1, s2, s3;
    string tmp;
    while (f1 >> tmp)
    {
        transform(all(tmp), tmp.begin(), ::tolower);
        s1.insert(tmp);
        s2.insert(tmp);
    }
    while (f2 >> tmp)
    {
        transform(all(tmp), tmp.begin(), ::tolower);
        if (s2.find(tmp) != s2.end())
        {
            s3.insert(tmp);
        }
        s1.insert(tmp);
    }
    for (auto it : s1)
    {
        cout << it << ' ';
    }
    cout << endl;
    for (auto it : s3)
    {
        cout << it << ' ';
    }
    f1.close();
    f2.close();
}
