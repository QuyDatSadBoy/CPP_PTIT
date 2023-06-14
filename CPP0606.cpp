#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
class NhanVien
{
private:
    string ten, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHD;

public:
    NhanVien()
    {
    }
    void nhap()
    {
        getline(cin, ten);
        getline(cin, gioiTinh);
        getline(cin, ngaySinh);
        getline(cin, diaChi);
        getline(cin, maSoThue);
        getline(cin, ngayKyHD);
    }
    void xuat()
    {
        cout << "00001" << ' ' << ten << ' ' << gioiTinh << ' ' << ngaySinh << ' ' << diaChi << ' ' << maSoThue << ' ' << ngayKyHD << endl;
    }
    ~NhanVien()
    {
    }
};
int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
