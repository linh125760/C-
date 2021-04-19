#include<iostream>
#include<fstream>

int main(){
	int n;
	int chieuCao, canNang;

	int nguoi[100][2] //có 2 tham so chieuCao, canNang // int arr[hang][cot]
	
	fi >> n >> m;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			cin >> a[i][j]; //xuat mang => thay cin = cout; 
//			cout << a[i][j] << " ";
		}
//		cout << endl;
	}
	
	int d = 0;
	
	for (int i = 0; i < n; i++){
		d += a[i][0] * a[i][1];
	}
	
	cout << "can vat lieu co do dai la: " >> d;
}
