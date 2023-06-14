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
    string hoten, lop, ngaysinh;
    double gpa;
};
void nhap(SinhVien a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].hoten);
        cin >> a[i].lop;
        cin >> a[i].ngaysinh;
        cin >> a[i].gpa;
    }
}
void in(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string id = to_string(i + 1);
        string chuanhoa = a[i].ngaysinh;
        if (chuanhoa[1] == '/')
        {
            chuanhoa = "0" + chuanhoa;
        }
        if (chuanhoa[4] == '/')
        {
            chuanhoa.insert(3, "0");
        }
        id = "B20DCCN" + string(3 - id.size(), '0') + id;
        cout << id << ' ' << a[i].hoten << ' ' << a[i].lop << ' ' << chuanhoa << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
