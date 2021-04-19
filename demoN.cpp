#include<iostream>

using namespace std;

int main() {
	for (int i = 1; i < 100000; i++) {
		if (( i % 4 ==0) && !((i % 100) % 4 == 0)){
			cout << "sai";
		}
	};
	
}
