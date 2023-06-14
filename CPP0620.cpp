#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct SinhVien
{
    string maSinhVien;
    string hoTen;
    string lop;
    string email;
    friend istream &operator>>(istream &in, SinhVien &x)
    {
        getline(in, x.maSinhVien);
        getline(in, x.hoTen);
        getline(in, x.lop);
        getline(in, x.email);
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x)
    {
        out << x.maSinhVien << ' ' << x.hoTen << ' ' << x.lop << ' ' << x.email << endl;
        return out;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, [](SinhVien x, SinhVien y) -> bool
         {
        if(x.lop!=y.lop)return x.lop<y.lop;
        return x.maSinhVien<y.maSinhVien; });
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
