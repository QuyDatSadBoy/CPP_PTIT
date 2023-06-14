#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void chuanhoa(vector<string> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i][0] = toupper(v[i][0]);
    }
}
void chuanhoa1(string s)
{
    transform(all(s), s.begin(), ::tolower);
    vector<string> v;
    stringstream ss(s);
    string token;
    while (ss >> token)
    {
        v.push_back(token);
    }
    chuanhoa(v);
    cout << v[v.size() - 1] << ' ';
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}
void chuanhoa2(string s)
{
    transform(all(s), s.begin(), ::tolower);
    vector<string> v;
    stringstream ss(s);
    string token;
    while (ss >> token)
    {
        v.push_back(token);
    }
    chuanhoa(v);
    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << v[0] << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        if (n == 1)
        {
            chuanhoa1(s);
        }
        else
        {
            chuanhoa2(s);
        }
    }
}
