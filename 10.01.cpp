#include <iostream>
using namespace std;
#define MAXN 100
struct PhanSo
{
    int x;
    int y;
};
int gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    return gcd(y, x % y);
}
void Nhapphanso(PhanSo &ps)
{
    int tu, mau;
    cin >> tu;
    ps.x = tu;
    cin >> mau;
    ps.y = mau;
}
void Nhap(PhanSo a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Nhapphanso(a[i]);
    }
}
void Xuat(PhanSo a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].y == 0)
            cout << "Khong thoa yeu cau bai toan"
                 << "\n";
        else if (a[i].x % a[i].y == 0)
        {
            cout << a[i].x / a[i].y << '\n';
        }
        else
        {
            if (a[i].x > 0 && a[i].y < 0)
            {
                cout << - a[i].x / gcd(a[i].x, a[i].y) << "/" << - a[i].y / gcd(a[i].x, a[i].y) << '\n';
            }
            else
            {
                cout << a[i].x / gcd(a[i].x, a[i].y) << "/" << a[i].y / gcd(a[i].x, a[i].y) << '\n';
            }
        }
    }
}
int main()
{
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);     
    return 0;
}
