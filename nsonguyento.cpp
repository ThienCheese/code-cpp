
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n, int y);

int main()
{
    int a[MAX], n, y;
    cin >> y;
    NhapmangSNT(a, n);
    cout << SoPhanTuChuaY(a, n, y) << endl;
    ;
    return 0;
}
int isPrimeNumber(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
void NhapmangSNT(int a[], int &n)
{
    cin >> n;
    int dem = 0;
    int so = 2;
    while (dem <= n)
    {
        int uoc = 0;
        for (int i = 1; i <= so; i++)
        {
            if (so % i == 0)
            {
                uoc++;
            }
        }
        if (uoc == 2)
        {
            a[dem] = so;
            dem++;
        }
        so ++;
    }
}
int SoPhanTuChuaY(int a[], int n, int y)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        while (a[i] != 0)
        {
            if (a[i] % 10 == y)
            {
                dem++;
                break;
            }
            a[i] /= 10;
        }
    }
    return dem;
}