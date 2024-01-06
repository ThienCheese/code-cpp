#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double S = 0, tich = 1;
    int i = 1;
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    while (i < n)
    {
        tich *= i;
        S = (i + 1) * tich + pow(tich, 1/i);
        i++;
    }
    S = pow(S,1/(n+1));
    cout << S;
    return 0;
}