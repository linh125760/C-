#include <iostream>
#include <string>
#define max 100

using namespace std;

class  hinh {
	public :
	int so_canh;
		hinh(){
			so_canh = 3 ;
		}
		hinh(int sc){
			so_canh = sc;	
		}
	float dien_tich;
	hinh(float s){
		dien_tich = s ;
	}

	
};
class hinh_chu_nhat:public hinh {
	private :
		float d,r ;	
	public :
		void nhap(float cd,float cr){
			cd = d;
			cr = r;
		}
		float tinh_dien_tich(){
			return d*r;
		}
};
class hinh_vuong : public hinh{
	private :
		float do_dai ;	
	public :
		void nhap_vuong(float dai){
			do_dai = dai;
		}
		float tinh_dien_tichv(){
			return do_dai * do_dai ;
		}
	
};
int main(){
	hinh h1(15.7f) ;
	cout << "So Canh : " << h1.so_canh << "dien tich"<< h1.dien_tich << endl ;
	hinh h2(4) ;
	cout << "so canh : "<< h2.so_canh<<endl;
	hinh_chu_nhat hcn1;
	hcn1.nhap(2,4);
	cout << "so canh hcn : " << hcn1.so_canh<< endl << "dien tich hcn : " <<hcn1.tinh_dien_tich()<< endl;
	hinh_vuong hv1;
	hv1.tinh_dien_tichv();
	cout << hv1.tinh_dien_tichv;
return 0;
}












