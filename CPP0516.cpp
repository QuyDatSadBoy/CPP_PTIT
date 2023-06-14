#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct hang
{
    int mamathang;
    string tenmathang, nhomhang;
    double giamua, giaban;
    double loinhuan;
};

int main()
{
    int n;
    cin >> n;
    hang a[100];
    for (int i = 0; i < n; i++)
    {
        a[i].mamathang = i + 1;
        cin.ignore();
        getline(cin, a[i].tenmathang);
        getline(cin, a[i].nhomhang);
        cin >> a[i].giamua >> a[i].giaban;
        a[i].loinhuan = a[i].giaban - a[i].giamua;
    }
    sort(a, a + n, [](hang a, hang b) -> bool
         { return a.loinhuan > b.loinhuan; });
    for (int i = 0; i < n; i++)
    {
        cout << a[i].mamathang << ' ' << a[i].tenmathang << ' ' << a[i].nhomhang << ' ' << fixed << setprecision(2) << a[i].loinhuan << endl;
    }
}
