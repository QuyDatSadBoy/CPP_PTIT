#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
class SinhVien
{
private:
    string msv, ten, lop, ngaySinh;
    float gpa;

public:
    SinhVien();
    friend istream &operator>>(istream &in, SinhVien &khac)
    {
        khac.msv = "B20DCCN001";
        getline(in, khac.ten);
        getline(in, khac.lop);
        getline(in, khac.ngaySinh);
        cin >> khac.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien khac)
    {
        khac.rutgon();
        out << "B20DCCN001" << ' ' << khac.ten << ' ' << khac.lop << ' ' << khac.ngaySinh << ' ' << fixed << setprecision(2) << khac.gpa << endl;
        return out;
    }
    void rutgon();
    ~SinhVien();
};
SinhVien::SinhVien()
{
    msv = ten = lop = ngaySinh = "";
    gpa = 0;
}
SinhVien::~SinhVien()
{
}
void SinhVien::rutgon()
{
    string token;
    stringstream ss(ten);
    string res = "";
    while (ss >> token)
    {
        transform(all(token), token.begin(), ::tolower);
        token[0] = toupper(token[0]);
        res += token + ' ';
    }
    res.pop_back();
    ten = res;
    if (ngaySinh[1] == '/')
    {
        ngaySinh = "0" + ngaySinh;
    }
    if (ngaySinh[4] == '/')
    {
        ngaySinh.insert(3, "0");
    }
}
int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}