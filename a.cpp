	#include<iostream>

	using namespace std;

	int main() {
		int a, b, j;
		cout << "Nhap vao so bat dau: ";
		cin >> a;
		cout << "Nhap vao so ket thuc: ";
		cin >> b;
		for (int i = a ;i <= b; i++) { //moi lan lap v�ng for n�y se in ra 1 h�ng (i dai dien cho so h�ng tu a den b)
			for (j = 0; j < i; j++){ //v�ng lap n�y se in ra so luong k� tu '*' tr�n moi h�ng
				cout << "*";
			}
		cout << " " << endl;
		}
		return 0;
	}
