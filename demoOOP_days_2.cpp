#include<iostream>

using namespace std;
class hinh {
	public:
		int socanh;
		float dientich;
		
		hinh() {
			socanh = 2;
		}
		
		hinh(int sc) {
			socanh = sc;
		}
		
		hinh(float S) {
			dientich = S;
		}
};

class HinhChuNhat: public hinh{
	public:
		float d,r;
		float dien_tich() {
			return d*r;
		}
};
	
int main() {
	hinh h1;
	cout << h1.socanh << " " << h1.dientich << endl;
	hinh h2(3);
	cout << h2.socanh << " " << h2.dientich << endl;
	
	HinhChuNhat hcn1;
	hcn1.r =10;
	hcn1.d = 2;
	cout << hcn1.socanh << endl << hcn1.dien_tich();
}
