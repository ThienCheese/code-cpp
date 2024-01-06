#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Nhập vào một số nguyên dương: ";
    cin >> n;

    int sqrt_n = sqrt(n);
    for (int i = 1; i <= sqrt_n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    cout << "Tổng các ước số của " << n << " là: " << sum;
    return 0;
}
