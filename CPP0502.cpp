#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

struct ThiSinh
{
    string ten;
    string ngaysinh;
    double diem1, diem2, diem3;
};
void nhap(ThiSinh &tmp)
{
    getline(cin, tmp.ten);
    cin >> tmp.ngaysinh;
    cin >> tmp.diem1 >> tmp.diem2 >> tmp.diem3;
}
void in(ThiSinh tmp)
{
    double tongdiem = (tmp.diem1 + tmp.diem2 + tmp.diem3);
    cout << tmp.ten << ' ' << tmp.ngaysinh << ' ' << fixed << setprecision(1) << (tmp.diem1 + tmp.diem2 + tmp.diem3) << endl;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}