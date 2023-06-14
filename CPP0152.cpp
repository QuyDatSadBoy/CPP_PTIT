// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define foru(i, a, b) for (ll i = a; i <= b; i++)
// #define ford(i, b, a) for (ll i = b; i >= a; i--)
// #define ms(a, n) memset(a, n, sizeof(a));

// ll x, y, g;
// void extended_gcd(ll a, ll b)
// {
//     if (b == 0)
//     {
//         x = 1;
//         y = 0;
//         g = a;
//     }
//     else
//     {
//         extended_gcd(b, a % b);
//         ll tmp = x;
//         x = y;
//         y = tmp - a / b * y;
//     }
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         extended_gcd(a, b);
//         if ((a == 1 && b == 1) || (a == 0))
//         {
//             cout << -1;
//         }
//         else if (g == 1)
//             cout << (x + b) % b;
//         else
//             cout << -1;
//         cout << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int main()
{
    // Bài lol này dùng euclid mở rộng nộp toàn WA duyệt trâu lại AC đm
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        bool check = false;
        foru(i, 1, b - 1)
        {
            if (a * i % b == 1)
            {
                cout << i << endl;
                check = true;
                break;
            }
        }
        if (check == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}