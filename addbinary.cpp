#include <iostream>
using namespace std;
string addBinary(string a, string b)
{
    int lech, nho;
    string tong;
    nho = 0;
    lech = a.size() - b.size();
    for (int i = a.size() - 1; i > (abs(lech) - 1); i--)
    {
        if ((a[i] == '1') && (b[i] == '1'))
        {
            tong = '0' + tong;
            nho += 1;
        }
        else if ((a[i] == '0') && b[i] == '0')
        {
            tong = '0' + tong;
        }
        else
        {
            tong = '1' + tong;
        }
        if ((nho > 0) && (tong[i] = '1'))
        {
            tong[i] = '0';
        }
        else if ((nho > 0) && (tong[i] = '0'))
        {
            tong[i] = '1';
            nho--;
        }
    }
    if (a.size() > b.size())
    {
        for (int i = abs(lech) - 1; i >= 0; i--)
        {
            tong = a[i] + tong;
             if ((nho > 0) && (tong[i] = '1'))
        {
            tong[i] = '0';
        }
        else if ((nho > 0) && (tong[i] = '0'))
        {
            tong[i] = '1';
            nho--;
        }
        }
    }
    else
    {
        for (int i = abs(lech) - 1; i >= 0; i--)
        {
            tong = b[i] + tong;
             if ((nho > 0) && (tong[i] = '1'))
        {
            tong[i] = '0';
        }
        else if ((nho > 0) && (tong[i] = '0'))
        {
            tong[i] = '1';
            nho--;
        }
    }
    }
    return tong;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b);
    return 0;
}
