#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int cnt = 1;
struct NhanVien
{
    string manhanvien, hoten, gioitinh, ngaysinh, diachi, masothue, hopdong;
};

void nhap(NhanVien &a)
{
    a.manhanvien = to_string(cnt++);
    a.manhanvien = string(5 - a.manhanvien.size(), '0') + a.manhanvien;
    cin.ignore();
    getline(cin, a.hoten);
    cin >> a.gioitinh >> a.ngaysinh;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.masothue >> a.hopdong;
}
void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i].manhanvien << ' ' << a[i].hoten << ' ' << a[i].gioitinh << ' ' << a[i].ngaysinh << ' ' << a[i].diachi << ' ' << a[i].masothue << ' ' << a[i].hopdong << endl;
    }
}
bool cmp(NhanVien a, NhanVien b)
{
    string ns1 = a.ngaysinh;
    string ns2 = b.ngaysinh;
    int thang1 = (ns1[0] - '0') * 10 + ns1[1] - '0';
    int thang2 = (ns2[0] - '0') * 10 + ns2[1] - '0';
    int ngay1 = (ns1[3] - '0') * 10 + ns1[4] - '0';
    int ngay2 = (ns2[3] - '0') * 10 + ns2[4] - '0';
    int nam1 = stoi(ns1.substr(6));
    int nam2 = stoi(ns2.substr(6));
    if (nam1 != nam2)
        return nam1 < nam2;
    if (thang1 != thang2)
        return thang1 < thang2;
    return ngay1 < ngay2;
}
void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
