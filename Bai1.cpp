#include<iostream>

using namespace std;

int main() {
    int a[1000];
    int n;
    
    cout << "Nhap do dai mang: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
    	cout << "Gia tri [" << i+1 << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
