#include<iostream>

using namespace std;

void nhap_mang(int a[], int n){
	for (int i = 0; i < n; i++) {
    	cout << "Gia tri [" << i << "] = ";
        cin >> a[i];
    }
}

void sap_xep(int a[], int n){
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Neu a[i] > a[j] thi hoan doi gia tri cua a[i] va a[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void xuat_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
	int a[1000];
    int n;
    
    cout << "Nhap do dai mang: " << endl;
    cin >> n;
    nhap_mang(a, n);
    
    sap_xep(a, n);
    
    cout << "Xuat mang: " << endl;
    xuat_mang(a,n);
    return 1;
}
