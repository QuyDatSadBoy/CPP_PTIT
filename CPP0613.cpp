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
    string msv, hoTen, lop, ngaySinh;
    double gpa;
    static int cnt;

public:
    double getGpa()
    {
        return this->gpa;
    }
    friend istream &operator>>(istream &in, SinhVien &x)
    {
        x.msv = "B20DCCN" + string(3 - to_string(cnt).size(), '0') + to_string(cnt);
        scanf("\n");
        getline(in, x.hoTen);
        getline(in, x.lop);
        getline(in, x.ngaySinh);
        cin >> x.gpa;
        ++cnt;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x)
    {
        x.chuanHoa();
        out << x.msv << ' ' << x.hoTen << ' ' << x.lop << ' ' << x.ngaySinh << ' ' << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
    void chuanHoa()
    {
        if (ngaySinh[1] == '/')
        {
            ngaySinh = "0" + ngaySinh;
        }
        if (ngaySinh[4] == '/')
        {
            ngaySinh.insert(3, "0");
        }
        string token;
        string res = "";
        stringstream ss(hoTen);
        while (ss >> token)
        {
            transform(all(token), token.begin(), ::tolower);
            token[0] = toupper(token[0]);
            res += token + ' ';
        }
        res.pop_back();
        hoTen = res;
    }
};
int SinhVien::cnt = 1;
bool cmp(SinhVien a, SinhVien b)
{
    return a.getGpa() > b.getGpa();
}
void sapxep(SinhVien a[], int n)
{
    sort(a, a + n, cmp);
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
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}
