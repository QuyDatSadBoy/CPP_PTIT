#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)

int tcs(int n)
{
    int sum = 0;
    while (n)
    {
        int r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = tcs(n);
        while (sum >= 10)
        {
            sum = tcs(sum);
        }
        cout << sum << endl;
    }
}