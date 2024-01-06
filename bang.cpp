#include<iostream>

using namespace std;

int main() {
    int a[1000],row,col,sum;
	sum =0;
    cout << "hello\n"; 
    cin >> row >> col;

    for (int i = 0; i < row; i++) {
        for(int j=0; j < col; j++) {
            cin >> a[j + i*col];
        }
	}	
	for (int i = 0; i < row; i++) {
        for(int j=0; j< col; j++) {
            cout << a[j + i*col] << " ";
            sum += a[j + i*col];
		}
		cout << endl;
	}
	cout << "tong la = " << sum;
    return 0;
}
