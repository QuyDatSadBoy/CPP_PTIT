#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
bool check(int n)
{
    while (n)
    {
        int r = n % 10;
        if (r != 0 && r != 6 && r != 8)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check(n))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}