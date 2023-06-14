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
    string maNhanVien, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHopDong;
    static int cnt;

public:
    NhanVien();
    friend istream &operator>>(istream &in, NhanVien &x)
    {
        if (cnt == 1)
            in.ignore();
        x.maNhanVien = string(5 - to_string(cnt).size(), '0') + to_string(cnt);
        getline(in, x.hoTen);
        getline(in, x.gioiTinh);
        getline(in, x.ngaySinh);
        getline(in, x.diaChi);
        getline(in, x.maSoThue);
        getline(in, x.ngayKyHopDong);
        ++cnt;
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien x)
    {
        out << x.maNhanVien << ' ' << x.hoTen << ' ' << x.gioiTinh << ' ' << x.ngaySinh << ' ' << x.diaChi << ' ' << x.maSoThue << ' ' << x.ngayKyHopDong << endl;
        return out;
    }
    ~NhanVien();
};
NhanVien::NhanVien()
{
    maNhanVien = hoTen = gioiTinh = ngaySinh = diaChi = maSoThue = ngayKyHopDong = "";
}
NhanVien::~NhanVien()
{
}
int NhanVien::cnt = 1;
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}
