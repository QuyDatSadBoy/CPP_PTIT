#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int cntKhachHang = 0;
int cntMatHang = 0;
int cntmaHoaDon = 0;
class KhachHang;
class MatHang;
map<string, KhachHang> KH;
map<string, MatHang> MH;
class KhachHang
{
private:
    string maKhachHang, tenKhachHang, gioiTinh, ngaySinh, diaChi;

public:
    friend istream &operator>>(istream &in, KhachHang &x)
    {
        ++cntKhachHang;
        x.maKhachHang = "KH" + string(3 - to_string(cntKhachHang).size(), '0') + to_string(cntKhachHang);
        if (cntKhachHang == 1)
            in.ignore();
        getline(in, x.tenKhachHang);
        getline(in, x.gioiTinh);
        getline(in, x.ngaySinh);
        getline(in, x.diaChi);
        KH[x.maKhachHang] = x;
        return in;
    }
    string getTenKhachHang()
    {
        return this->tenKhachHang;
    }
    string getDiaChi()
    {
        return this->diaChi;
    }
};

class MatHang
{
public:
    string maMatHang, tenMatHang, donViTinh;
    int giaMua, giaBan;
    friend istream &operator>>(istream &in, MatHang &x)
    {
        ++cntMatHang;
        x.maMatHang = "MH" + string(3 - to_string(cntMatHang).size(), '0') + to_string(cntMatHang);
        in.ignore();
        getline(in, x.tenMatHang);
        getline(in, x.donViTinh);
        cin >> x.giaMua >> x.giaBan;
        MH[x.maMatHang] = x;
        return in;
    }
};

class HoaDon : public KhachHang, public MatHang
{
private:
    string maHoaDon, maKhachHang, maMatHang;
    int soLuong;

public:
    friend istream &operator>>(istream &in, HoaDon &x)
    {
        ++cntmaHoaDon;
        x.maHoaDon = "HD" + string(3 - to_string(cntmaHoaDon).size(), '0') + to_string(cntmaHoaDon);
        cin >> x.maKhachHang >> x.maMatHang >> x.soLuong;
        return in;
    }
    friend ostream &operator<<(ostream &out, HoaDon x)
    {
        out << x.maHoaDon << ' ' << KH[x.maKhachHang].getTenKhachHang() << ' ' << KH[x.maKhachHang].getDiaChi() << ' ' << MH[x.maMatHang].tenMatHang << ' ' << MH[x.maMatHang].donViTinh << ' ' << MH[x.maMatHang].giaMua << ' ' << MH[x.maMatHang].giaBan << ' ' << x.soLuong << ' ' << x.soLuong * MH[x.maMatHang].giaBan << endl;
        return out;
    }
};

int main()
{
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}
