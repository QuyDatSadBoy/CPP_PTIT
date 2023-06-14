#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
int demchan = 0;
int demle = 0;
void dem(int n)
{
    while (n)
    {
        int r = n % 10;
        if (r % 2 == 0)
            ++demchan;
        else
            ++demle;
        n /= 10;
    }
}
int main()
{
    int n;
    cin >> n;
    int begin = pow(10, n - 1);
    int end = pow(10, n) - 1;
    int cnt = 0;
    foru(i, begin, end)
    {
        dem(i);
        if (demchan == demle)
        {
            cout << i;
            ++cnt;
            if (cnt == 10)
            {
                cout << endl;
                cnt = 0;
            }
            else
                cout << ' ';
        }
        demchan = 0;
        demle = 0;
    }
}