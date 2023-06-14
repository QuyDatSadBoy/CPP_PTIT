#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

struct SinhVien
{
    string ten, lop, ngaysinh;
    double gpa;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.ngaysinh;
    cin >> a.gpa;
}
void inThongTinSV(SinhVien a)
{
    cout << "N20DCCN001"
         << "\t";
    string res = "";
    string token;
    stringstream ss(a.ngaysinh);
    while (getline(ss, token, '/'))
    {
        if (token.size() == 1)
        {
            token = "0" + token;
        }
        res += token + '/';
    }
    res.pop_back();
    cout << a.ten << "\t" << a.lop << " \t" << res << "\t" << fixed << setprecision(2) << a.gpa << endl;
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}