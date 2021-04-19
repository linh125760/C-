#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[100];
	int n  = 0;
	
	fstream f;
	f.open("file.txt");
	
	while (!f.eof()){
		f >> arr[n];
		n++; //n = n + 1;
	} 
	cout << "Tong phan tu la: " << n;
}
