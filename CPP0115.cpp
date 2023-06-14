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
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int cnt = 0;
                while (n % i == 0)

                {
                    n /= i;
                    ++cnt;
                }
                cout << i << ' ' << cnt << ' ';
            }
        }
        if (n != 1)
        {
            cout << n << ' ' << 1;
        }
        cout << endl;
    }
}