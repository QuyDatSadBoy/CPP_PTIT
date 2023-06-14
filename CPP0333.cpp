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
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream ss(s);
    string token;
    vector<string> v;
    while (getline(ss, token, ' '))
    {
        v.push_back(token);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        string tmp = v[i];
        tmp[0] = toupper(tmp[0]);
        cout << tmp;
        if (i == v.size() - 2)
            cout << ", ";
        else
            cout << ' ';
    }
    string tmp = v[v.size() - 1];
    foru(i, 0, tmp.size() - 1)
    {
        tmp[i] = toupper(tmp[i]);
    }
    cout << tmp;
}