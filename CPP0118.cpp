#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

bool sphenic(int n)
{
    int cnt = 0;
    foru(i, 2, sqrt(n))
    {
        if (n % i == 0)
        {
            ++cnt;
            int dem = 0;
            while (n % i == 0)
            {
                n /= i;
                ++dem;
            }
            if (dem >= 2)
                return false;
            if (cnt > 3)
                return false;
        }
    }
    if (n != 1)
        ++cnt;
    return cnt == 3;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sphenic(n) << endl;
    }
}