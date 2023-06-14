#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int nt[1000006];
void ktao()
{
    ms(nt, 1);
}
void sinh()
{
    nt[0] = nt[1] = 0;
    foru(i, 2, sqrt(1000000))
    {
        if (nt[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
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
bool smith(int n)
{
    if (nt[n])
        return false;
    int sum1 = 0;
    int sum2 = tcs(n);
    foru(i, 2, sqrt(n))
    {
        while (n % i == 0)
        {
            n /= i;
            sum1 += tcs(i);
        }
    }
    if (n != 1)
        sum1 += tcs(n);
    return sum1 == sum2;
}
int main()
{
    ktao();
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (smith(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}