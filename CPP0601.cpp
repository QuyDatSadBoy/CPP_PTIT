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
    void nhap()
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
    }
    void xuat()
    {
        string s = ngaysinh;
        string token;
        stringstream ss(s);
        string res = "";
        while (getline(ss, token, '/'))
        {
            if (token.size() == 1)
            {
                token = "0" + token;
            }
            res += token + "/";
        }
        res.pop_back();
        cout << "B20DCCN001" << ' ' << ten << ' ' << lop << ' ' << res << ' ' << fixed << setprecision(2) << gpa << endl;
    }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}