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
    string msv, ten, lop;
    double diem1, diem2, diem3;
};

void nhap(SinhVien &a)
{
    cin.ignore();
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin >> a.diem1 >> a.diem2 >> a.diem3;
}
void in_ds(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ' ';
        cout << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << ' ' << fixed << setprecision(1) << a[i].diem1 << ' ' << a[i].diem2 << ' ' << a[i].diem3 << endl;
    }
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.ten < b.ten;
}
void sap_xep(SinhVien a[], int n)
{
    sort(a, a + n, cmp);
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}
