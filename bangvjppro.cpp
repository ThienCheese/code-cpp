#include <iostream>

using namespace std;

int main() {
	int n,m;
	cout << "Nhap so hang n: ";
	cin >> n;
	cout << "Nhap so cot m: ";
	cin >> m;
	int ** arr = new int*[n];
	for (int i = 0; i < n;i++) {
		arr[i] = new int[m];
	}
	cout << "Nhap tung phan tu: ";
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < m;j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n;i++) {
		int sum = 0;
		for (int j = 0; j < m;j++) {
			sum += arr[i][j];
		}
		cout << "tong hang nay la " << sum << endl;
	}
	for (int i=0;i<n;i++) {
        delete[] arr[i];
    }
	return 0;
}