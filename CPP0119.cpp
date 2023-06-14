#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // vd phân tích 100=2^2*25
        // thì biến dem1=2(là số mũ của 2)
        // còn lại 25 thì đếm ước của rồi lưu vào biến dem2
        // dem1*dem2 sẽ ra đáp án thỏa mãn vì
        // 2^1 * 1 = 2
        // 2^2 * 1 = 4
        // 2^1 * 5 = 10
        // 2^2 * 5 = 20
        // 2^1 * 25 = 50
        // 2^2 * 25 = 100
        int n;
        cin >> n;
        int dem1 = 0;
        while (n % 2 == 0)
        {
            ++dem1;
            n /= 2;
        }
        int dem2 = 0;
        foru(i, 1, sqrt(n))
        {
            if (n % i == 0)
            {
                if (i == n / i)
                    ++dem2;
                else
                    dem2 += 2;
            }
        }
        cout << dem1 * dem2 << endl;
    }
}
