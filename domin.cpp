#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int nhap[40][40];
    int xuat[40][40];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nhap[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            xuat[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (nhap[i][j] == 1)
            {
                xuat[i - 1][j] = 1;
                xuat[i + 1][j] = 1;
                xuat[i][j - 1] = 1;
                xuat[i][j + 1] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << xuat[i][j] << " ";
        }
        cout << endl;
    }
}
