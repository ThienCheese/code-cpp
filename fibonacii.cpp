#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
    int x;
    cin >> x;
    if ((x <= 0) || (x > 30))
    {
        cout << "So " << x << " khong nam trong khoang [1,30].";
    }
    else
        cout << Fibo(x);
    return 0;
}
int Fibo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return Fibo(n - 1) + Fibo(n - 2);
}