#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

bool check(int n)
{
    foru(i, 2, sqrt(n))
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int main()
{
    int n;
    cin >> n;
    if (check(n))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}