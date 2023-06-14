#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
ll gt[30];
void sinhGt()
{
    gt[0] = 1;
    gt[1] = 1;
    foru(i, 1, 29)
    {
        gt[i] = gt[i - 1] * i;
    }
}
int main()
{
    sinhGt();
    int n;
    cin >> n;
    ll sum = 0;
    foru(i, 1, n)
    {
        sum += gt[i];
    }
    cout << sum << endl;
}