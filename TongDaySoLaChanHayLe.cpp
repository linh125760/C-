#include <iostream>
 
using namespace std;
 
int main() {
  cout << "Nhap 8 so co mot chu so bat ki";
  int a1, a2, a3, a4, a5, a6, a7, a8;
  int sum8nums;
  cout << "Nhap So Thu 1" << endl;
  cin >> a1;
  cout << "Nhap So thu 2: " << endl;
  cin >> a2;
  cout << "Nhap So thu 3: " << endl;
  cin >> a3;
  cout << "Nhap So thu 4: " << endl;
  cin >> a4;
  cout << "Nhap So thu 5: " << endl;
  cin >> a5;
  cout << "Nhap So thu 6: " << endl;
  cin >> a6;
  cout << "Nhap So thu 7: " << endl;
  cin >> a7;
  cout << "Nhap So thu 8: " << endl;
  cin >> a8;
  // tong 8 so vua nhap
  sum8nums = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
  cout << "Tong 8 so vua nhap la: " << sum8nums << endl;
 
  // Kiem tra tinh chan le
  if (sum8nums % 2 == 0)
  {
    cout << "Tong la mot so CHAN";
  }
  else
  {
    cout << "Tong la mot so LE";
  }
}
