	#include<iostream>

	using namespace std;

	int main() {
		int a, b, j;
		cout << "Nhap vao so bat dau: ";
		cin >> a;
		cout << "Nhap vao so ket thuc: ";
		cin >> b;
		for (int i = a ;i <= b; i++) { //moi lan lap vòng for này se in ra 1 hàng (i dai dien cho so hàng tu a den b)
			for (j = 0; j < i; j++){ //vòng lap này se in ra so luong ký tu '*' trên moi hàng
				cout << "*";
			}
		cout << " " << endl;
		}
		return 0;
	}
