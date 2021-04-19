#include<iostream>

using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	/*  Cách 1:
	if (a >= b && a >= c) {
		cout << a;
	} else if (b >= c) {
		cout << b;
	} else {
		cout << c;
	}
	*/
	
	/* Cách 2 
	cout << max(a,max(b,c));
	*/
	
	return 0;
}


