#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
class DoanhNghiep
{
private:
    string ma, ten;
    int soLuong;

public:
    DoanhNghiep();
    ~DoanhNghiep();
    friend istream &operator>>(istream &, DoanhNghiep &);
    friend ostream &operator<<(ostream &, DoanhNghiep);
    string getMa();
    int getSoLuong();
};
istream &operator>>(istream &in, DoanhNghiep &x)
{
    cin.ignore();
    getline(in, x.ma);
    getline(in, x.ten);
    in >> x.soLuong;
    return in;
}
ostream &operator<<(ostream &out, DoanhNghiep x)
{
    cout << x.ma << ' ' << x.ten << ' ' << x.soLuong << endl;
    return out;
}
string DoanhNghiep::getMa()
{
    return this->ma;
}
int DoanhNghiep::getSoLuong()
{
    return this->soLuong;
}
DoanhNghiep::DoanhNghiep()
{
}

DoanhNghiep::~DoanhNghiep()
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<DoanhNghiep> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v), [](DoanhNghiep a, DoanhNghiep b) -> bool
         {
        if(a.getSoLuong()!=b.getSoLuong())return a.getSoLuong()>b.getSoLuong();
        return a.getMa()<b.getMa(); });
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for (int i = 0; i < n; i++)
        {
            if (v[i].getSoLuong() >= a && v[i].getSoLuong() <= b)
            {
                cout << v[i];
            }
        }
    }
}
