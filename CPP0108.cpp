#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

bool check(ll n)
{
    foru(i, 2, sqrt(n))
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
bool checkGiamDan(ll n)
{
    if (n < 10)
        return true;
    int end = n % 10;
    n /= 10;
    while (n)
    {
        int r = n % 10;
        if (r > end)
        {
            end = r;
        }
        else
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
bool checkTangDan(ll n)
{
    if (n < 10)
        return true;
    int end = n % 10;
    n /= 10;
    while (n)
    {
        int r = n % 10;
        if (r < end)
        {
            end = r;
        }
        else
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
        ll n;
        cin >> n;
        ll begin = 1ll * pow(10, n - 1);
        ll end = 1ll * pow(10, n) - 1;
        ll cnt = 0;
        foru(i, begin, end)
        {
            if (checkGiamDan(i) && check(i))
            {
                ++cnt;
            }
            else if (checkTangDan(i) && check(i))
            {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}