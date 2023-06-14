#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
int main()
{
    string maDe101 = "ABBADCCABDCCABD";
    string maDe102 = "ACCABCDDBBCDDBB";
    int t;
    cin >> t;
    while (t--)
    {
        int maDe;
        cin >> maDe;
        int j = 0;
        double res = 0;
        if (maDe == 101)
        {
            foru(i, 0, 14)
            {
                char dapAn;
                cin >> dapAn;
                if (dapAn == maDe101[i])
                {
                    res += 1.0 * 10 / 15;
                }
            }
        }
        else
        {
            foru(i, 0, 14)
            {
                char dapAn;
                cin >> dapAn;
                if (dapAn == maDe102[i])
                {
                    res += 1.0 * 10 / 15;
                }
            }
        }
        cout << fixed << setprecision(2) << res << endl;
    }
}
