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
    string res = "";
    stringstream ss(s);
    vector<string> v;
    string word;
    while (ss >> word)
    {
        v.push_back(word);
    }
    res += v[v.size() - 1];
    foru(i, 0, v.size() - 2)
    {
        res += v[i][0];
    }
    transform(res.begin(), res.end(), res.begin(), ::tolower);
    res += "@ptit.edu.vn";
    cout << res << endl;
}