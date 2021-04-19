#include<iostream>
#include<Math.h>

using namespace std;

int main() {
	float a,b, c;
	cout << "PT Bac Hai Co Dang: ax^2 + bx + c " << endl;
	cout << "Nhap a, b, c" << endl;
	cin >> a >> b >> c;
	float delta = b*b - 4*a*c;
	
	cout << "Delta = " << delta << endl;
	
	if (a == 0 ) {
		if(b == 0) {
            if (c == 0) {
                cout << "PT Vo So Nghiem" << endl;
            } else {
                cout << "PT Vo Nghiem" << endl;
            }
        } else {
            cout << "PT Co Nghiem Duy Nhat: " << -c/b << endl;
        }
	}
	else{
		if (delta  > 0) {
			cout << "PT Co 2 Nghiem Phan Biet" << endl;
			cout << "x1: " << (-b + sqrt(delta))/(2*a) << endl;
			cout << "x2: " << (-b - sqrt(delta))/(2*a) << endl;
		} else if (delta == 0) {
			cout << "PT Co Nghiem Kep x1=x2=" << (-b)/(2*a) << endl;
		} else {
			cout << "PT Vo Nghiem" << endl;
		}
	} 
}
