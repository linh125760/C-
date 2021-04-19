#include<iostream>

using namespace std;

int main() {
    int n;
    int arr[1000];
    
    cout << "Nhap do dai mang: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
    	cout << "Gia tri [" << i+1 << "] = ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // N?u arr[i] > arr[j] thì hoán d?i giá tr? c?a arr[i] và arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
