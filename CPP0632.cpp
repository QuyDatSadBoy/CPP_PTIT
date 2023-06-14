#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

int sttkhachhang = 1;
int sttmathang = 1;
int stthoadon = 1;

class KhachHang
{
public:
    string makhachhang, tenkhachhang, gioitinh, ngaysinh, diachi;
    friend istream &operator>>(istream &in, KhachHang &x)
    {
        if (sttkhachhang == 1)
        {
            in.ignore();
        }
        getline(in, x.tenkhachhang);
        getline(in, x.gioitinh);
        getline(in, x.ngaysinh);
        getline(in, x.diachi);
        x.makhachhang = "KH" + string(3 - to_string(sttkhachhang).size(), '0') + to_string(sttkhachhang);
        ++sttkhachhang;
        KH[x.makhachhang] = x;
        return in;
    }
};
class MatHang
{
public:
    string mamathang, tenmathang, donvitinh;
    ll giamua, giaban;
    friend istream &operator>>(istream &in, MatHang &x)
    {
        in.ignore();
        getline(in, x.tenmathang);
        getline(in, x.donvitinh);
        cin >> x.giamua >> x.giaban;
        x.mamathang = "MH" + string(3 - to_string(sttmathang).size(), '0') + to_string(sttmathang);
        ++sttmathang;
        MH[x.mamathang] = x;
        return in;
    }
};
class HoaDon
{
public:
    string mahoadon, makhachhang, mamathang;
    ll soluong, loinhuan;
    friend istream &operator>>(istream &in, HoaDon &x)
    {
        x.mahoadon = "HD" + string(3 - to_string(stthoadon).size(), '0') + to_string(stthoadon);
        ++stthoadon;
        in >> x.makhachhang >> x.mamathang >> x.soluong;
        x.loinhuan = (MH[x.mamathang].giaban - MH[x.mamathang].giamua) * x.soluong;
        return in;
    }
    friend ostream &operator<<(ostream &out, HoaDon x)
    {
        out << x.mahoadon << ' ' << KH[x.makhachhang].tenkhachhang << ' ' << KH[x.makhachhang].diachi << ' ' << MH[x.mamathang].tenmathang << ' ' << x.soluong << ' ' << MH[x.mamathang].giaban * x.soluong << ' ' << x.loinhuan << endl;
        return out;
    }
};

bool cmp(HoaDon a, HoaDon b)
{
    return a.loinhuan > b.loinhuan;
}
void sapxep(HoaDon a[], int n)
{
    stable_sort(a, a + n, cmp);
}
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

    sapxep(dshd, K);

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}
