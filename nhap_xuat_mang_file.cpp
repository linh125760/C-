#include<iostream>
#include<fstream>

using namespace std;

int main() {
	int n;
	int a[100];
	
//	ifstream fi("file.txt");   C�ch khai b�o r� hon
//	ofstream fo("fileout.txt");	 
	
	fstream fileRead, fileWrite;
	
	fileRead.open("file.txt", ios::in);
	fileWrite.open("fileOut.txt", ios::out); // G�n du lieu tu file -> fileOut (Neu chua co fileOut se tu tao fileOut)
	while (fileRead >> a[n]) n++;

	cout << n << endl;
	
	for (int i=0; i<n; i++) {
		fileWrite << a[i] << " ";
	}
	
	fileWrite << endl;

	fileRead.close();
	fileWrite.close();
	return 0;
}
