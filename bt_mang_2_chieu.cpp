#include<iostream>
#include<fstream>

using namespace std;
int main() {
	int x;
	int n, m;
	int arr[4][3];
	
	ifstream fi("hmm.txt");
	fi >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fi >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "Nhap so can tim: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
	        if (arr[i][j] == x) {
	            cout << "Yes";
	            break;
            }
		}
    }
	
	fi.close();
}
