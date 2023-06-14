#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

struct NhanVien
{
    string ten, gt, ngaysinh, diachi, masothue, hopdong;
};
// void chuanhoa(NhanVien &a)
// {
//     string token;
//     stringstream ss(a.ngaysinh);
//     string res = "";
//     while (getline(ss, token, '/'))
//     {
//         if (token.size() == 1)
//         {
//             token = '0' + token;
//         }
//         res += token + '/';
//     }
//     res.pop_back();
//     a.ngaysinh = res;
//     // ngay ky hop dong
//     stringstream ss2(a.hopdong);
//     res = "";
//     while (getline(ss2, token, '/'))
//     {
//         if (token.size() == 1)
//         {
//             token = '0' + token;
//         }
//         res += token + '/';
//     }
//     res.pop_back();
//     a.hopdong = res;
// }
void nhap(NhanVien &a)
{
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.masothue);
    getline(cin, a.hopdong);
    // chuanhoa(a);
}
void in(NhanVien a)
{
    cout << "00001" << ' ';
    cout << a.ten << ' ' << a.gt << ' ' << a.ngaysinh << ' ' << a.diachi << ' ' << a.masothue << ' ' << a.hopdong << endl;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}