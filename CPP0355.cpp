#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool chuanHoa(string &token)
{
    transform(all(token), token.begin(), ::tolower);
    bool check = true;
    int so = 0, chu = 0;
    for (int j = 0; j < token.size(); j++)
    {
        if (isalpha(token[j]) && check == true)
        {
            token[j] = toupper(token[j]);
            check = false;
        }
        if (isdigit(token[j]))
            ++so;
        if (isalpha(token[j]))
            ++chu;
    }
    if (so == 0 && chu == 0)
        return false;
    else
        return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    string res = "";
    while (getline(cin, s))
    {
        res += s;
    }
    for (char &x : res)
    {
        if (x == '.' || x == '?' || x == '!')
        {
            x = '.';
        }
    }
    vector<string> v;
    stringstream ss(res);
    string token;
    while (getline(ss, token, '.'))
    {
        if (chuanHoa(token))
            v.push_back(token);
    }
    for (int i = 0; i < v.size(); i++)
    {
        stringstream ss2(v[i]);
        string word;
        while (ss2 >> word)
        {
            cout << word << ' ';
        }
        cout << endl;
    }
}
