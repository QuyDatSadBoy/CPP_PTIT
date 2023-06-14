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
class SinhVien
{
private:
    string msv, hoTen, lop, ngaySinh;
    double gpa;

public:
    SinhVien();
    void chuanHoa();
    friend istream &operator>>(istream &in, SinhVien &x)
    {
        x.msv = "B20DCCN" + string(3 - to_string(cnt++).size(), '0') + to_string(cnt);
        in.ignore();
        getline(in, x.hoTen);
        getline(in, x.lop);
        getline(in, x.ngaySinh);
        in >> x.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x)
    {
        x.chuanHoa();
        out << x.msv << ' ' << x.hoTen << ' ' << x.lop << ' ' << x.ngaySinh << ' ' << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
    ~SinhVien();
};

void SinhVien::chuanHoa()
{
    if (ngaySinh[1] == '/')
    {
        ngaySinh = "0" + ngaySinh;
    }
    if (ngaySinh[4] == '/')
    {
        ngaySinh.insert(3, "0");
    }
}
SinhVien::SinhVien()
{
    this->msv = this->hoTen = this->lop = "";
    this->gpa = 0;
}
SinhVien::~SinhVien()
{
}
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}
