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
    string hoten, lop, ngaysinh, masinhvien;
    double gpa;
};
bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}
void sapxep(SinhVien a[], int n)
{
    sort(a, a + n, cmp);
}
void nhap(SinhVien a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        string id = to_string(i + 1);
        a[i].masinhvien = "B20DCCN" + string(3 - id.size(), '0') + id;
        cin.ignore();
        getline(cin, a[i].hoten);
        cin >> a[i].lop >> a[i].ngaysinh >> a[i].gpa;
    }
}
void in(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string ngaysinh = a[i].ngaysinh;
        if (ngaysinh[1] == '/')
        {
            ngaysinh = "0" + ngaysinh;
        }
        if (ngaysinh[4] == '/')
        {
            ngaysinh.insert(3, "0");
        }

        transform(all(a[i].hoten), a[i].hoten.begin(), ::tolower);
        string hoten = "";
        stringstream ss(a[i].hoten);
        string token;
        while (ss >> token)
        {
            token[0] = toupper(token[0]);
            hoten += token + " ";
        }
        hoten.pop_back();
        cout << a[i].masinhvien << ' ' << hoten << ' ' << a[i].lop << ' ' << ngaysinh << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}