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
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        string token;
        stringstream ss(s);
        vector<string> v;
        while (ss >> token)
        {
            v.push_back(token);
        }
        ford(i, v.size() - 1, 0)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
}