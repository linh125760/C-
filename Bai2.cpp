#include<iostream>

using namespace std;

int main() {
    int a[1000];
    int n,x;
    cout << "Nhap do dai mang: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
    	cout << "Gia tri [" << i << "] = ";
        cin >> a[i];
    }	

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    cout << "Nhap so can tim: ";
    cin >> x;

    int vitri;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            vitri = i;
            break;
        }
    }

	cout << vitri;
    return 0;
}
