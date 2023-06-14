#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int bangnhau(int a, int b)
{
    int r1 = a % 10;
    while (a)
    {
        if (a % 10 != r1)
            return 0;
        a /= 10;
    }
    while (b)
    {
        if (b % 10 != r1)
            return 0;
        b /= 10;
    }
    return 1;
}
int bangnhau32(int a, int b)
{
    int r1 = a % 10;
    int r2 = b % 10;
    while (a)
    {
        if (a % 10 != r1)
            return 0;
        a /= 10;
    }
    while (b)
    {
        if (b % 10 != r2)
            return 0;
        b /= 10;
    }
    return 1;
}
int locphat(int a, int b)
{
    while (a)
    {
        if (a % 10 != 6 && a % 10 != 8)
            return 0;
        a /= 10;
    }
    while (b)
    {
        if (b % 10 != 6 && b % 10 != 8)
            return 0;
        b /= 10;
    }
    return 1;
}
int tangchat(int a, int b)
{
    int r = b % 10;
    b /= 10;
    if (b < r)
        r = b;
    else
        return 0;
    while (a)
    {
        if (a % 10 < r)
            r = a % 10;
        else
            return 0;
        a /= 10;
    }
    return 1;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = stoi(s.substr(5, 3));
        int b = stoi(s.substr(9, 2));
        if (tangchat(a, b) || bangnhau(a, b) || bangnhau32(a, b) || locphat(a, b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
