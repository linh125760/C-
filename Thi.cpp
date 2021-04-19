#include<iostream>
#include<fstream>
#include <algorithm>
#include <math.h>

using namespace std;

class Hinh_da_giac {
  public: 
    int so_dinh;
    float dinh[100][2]; 

  	void nhap_thong_tin(int n, float dl[100][2]){
		so_dinh = n;
		copy(dl, dl + n, dinh);
	};
    	
  	void hien_thi_thong_tin_da_giac() {
	   for (int i =0; i < so_dinh; i++) {
	   		cout << dinh[i][0] << " " << dinh[i][1] << endl;
	   }
 	}

	float tinh_dien_tich_tam_giac(float x1,float y1,float x2,float y2,float x3,float y3) {
		float a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		float b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		float c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		float P = (a + b + c)/2;
		return sqrt(P*(P -a)*(P - b)*(P-c));
	}

	float tinh_dien_tich() {
		return tinh_dien_tich_tam_giac(dinh[0][0], dinh[0][1], dinh[1][0], dinh[1][1], dinh[3][0], dinh[3][1]) + tinh_dien_tich_tam_giac(dinh[1][0], dinh[1][1], dinh[2][0], dinh[2][1], dinh[3][0], dinh[3][1]);
	}

};

int main(){
	
	float arr[100][2];
	int n;
	
	ifstream doc("data.txt");
	ofstream xuat("ketqua.txt");

	doc >> n;
	
	for (int i = 0; i < n; i++) {
		doc >> arr[i][0] >> arr[i][1];
	}
	
	Hinh_da_giac tugiac;
	
	tugiac.nhap_thong_tin(n, arr);
	
	tugiac.hien_thi_thong_tin_da_giac();
	
	cout << "Dien tich tu giac la: " << tugiac.tinh_dien_tich(); // De luu ket qua qua file ketqua.txt thay cout = xuat nha a :>>
  
  	doc.close();
  	xuat.close();
}
