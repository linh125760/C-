#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class hs {
	public:
	string name;
	float toan;
	float van;
	float ly;
	float hoa;
	
	float dtb() {
		return (toan*2 + van*2 + ly + hoa)/6;
	}
	
	string xeploai() {
		if (dtb() >8) {
			cout << "Gioi";	
		} else if (dtb() < 8 && dtb() > 6.5 ){
			cout << "Kha";	
		} else {
			cout << "Ngu";
		}
	}
};

int main() {
	ifstream doc("oop.txt");
	ofstream xuat("outoop.txt");
	
	int n;
	
	doc >> n;
	hs student[100]; //Tao 100 hoc sinh tu hs
	
	for (int i = 0; i < n; i++) {
		doc >> student[i].name;
		doc >> student[i].toan;
		doc >> student[i].van;
		doc >> student[i].ly;
		doc >> student[i].hoa;
		student[i].xeploai();
		
		cout << "Ten SV: " << student[i].name << endl << "Diem Toan " << student[i].toan << endl << "Diem Van " << student[i].van << endl << "Diem Ly " << student[i].ly << endl << "Diem Hoa " << student[i].hoa << endl << "Diem Trung Binh " << student[i].dtb() << endl  << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
	};
	cout << "Xuat thanh cong du lieu vao file Outoop.txt. SUCCESS";
	doc.close();
	xuat.close();
}
