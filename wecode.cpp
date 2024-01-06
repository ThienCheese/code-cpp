
#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

void Nhapmang(int a[][16], int &n)
{
    cin >> n;
}
void Xuatmang(int a[][16], int n)
{
    a[0][0] = 1;
    a[0][1] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j >= 2)
            {
                a[i][j] = a[i][j - 1] + a[i][j - 2];
            }
            else if (i != 0 && j < n - 1)
            {
                a[i][j] = a[i - 1][j + 1];
            }
            else if ((n == 2))
            {
                a[1][1] = 2;
            }
            else if ((i != 0) && (j == n - 1) && n > 2)
            {
                a[i][j] = a[i][j - 1] + a[i][j - 2];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n, a[MAX][MAX];
    Nhapmang(a, n);
    Xuatmang(a, n);

    return 0;
}