#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        int j = s.size() - 1;
        bool check = true;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                check = false;
                break;
            }
            ++i;
            --j;
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}