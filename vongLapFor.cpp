// Nhap vao day so chan (le) roi in ra
#include<iostream>

using namespace std;

int main() {
	int a; //in ra day so chan neu a chan, in ra day so le neu a le
	cin >> a;
    for (int i = a; i <= 100; i = i + 2) {
        cout << i << " ";
    }
    return 0;
}


// Nhap a, b. T�nh tong tu a den b: 
#include<iostream>

using namespace std;

int main() {
    int a, b;
    // sum l� bi?n luu tr? t?ng c�c s? t? a t?i b
    // Luu �: b?n c?n kh?i t?o gi� tr? cho bi?n sum = 0
    int sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}

// nhap v�o tu b�n ph�m so nguy�n n v� thuc hien hien thi ra tong c�c so le tu 0 toi n.
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 1) {
            // sum += i; tuong duong v?i sum = sum + i;
            sum += i;
        }
    }
    cout << sum;
    return 0;
}


// Ban hay viet chuong trinh nhap tu ban phim so nguyen n, t�nh giai thua cua no (n!) (vd: n = 5 => 1 * 2 * 3 * 4 * 5)
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Bien luu tru ket qua cua n!
    // Luu �: ban can khoi tao gi� tri cho bien n�y = 1
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    cout << factorial;
    return 0;
}


// Viet chuong trinh nhap vao 1 so n, hien thi ra man hinh cac uoc cua n (n > 0)
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Neu n chia het cho i thi i chinh la uoc cua n
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}


// Viet chuong trinh nhap vao so n, hien thi ra cac so chan tu n -> 100;
	// Code theo for (d�i d�ng)
	#include<iostream>

	using namespace std;

	int main() {
		int n;
		cin >> n;
		for (int i = n; i <= 100; i++) {
			if (i %2 == 0) {
				cout << i << " ";
			}
		}
		return 0;
	}

	// Code theo while (ngan gon)
	#include<iostream>

	using namespace std;
	
	int main() {
		int n;
		cin >> n;
		while (n <= 100) {
			if (n % 2 == 0) {
				cout << n << " ";
			}
			n++; // Luu y cai nay -_-
		}
		return 0;
	}
	

// viet chuong tr�nh nhap tu b�n ph�m so nguy�n n v� hien thi ra m�n h�nh tong c�c uoc so cua n. (vd: n =12 => 6)

	// D�ng while
	#include<iostream>
	
	using namespace std;
	
	int main() {
		int n;
		cin >> n;
		int i = 1;
		int tong = 0;
		while (i <= n) {
			if (n % i == 0) {
				tong++;
			}
			i++;
		}
		cout << tong;
		return 0;
	}
	
	// D�ng for
	#include<iostream>

	using namespace std;
	
	int main() {
		int n;
		cin >> n;
		int count = 0;
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				count++;
			}
		}
		cout << count;
		return 0;
	}
	

//Ban h�y viet chuong tr�nh nhap tu b�n ph�m hai so nguy�n duong a v� b. Sau d� hien thi ra m�n h�nh ket qua cua a^b. (Ex: a =2; b =3 => kq = 2^3 =8 )
	// D�ng while
	#include<iostream>

	using namespace std;
	
	int main() {
	    int a, b;
	    cin >> a >> b;
	    // ketqua l� bien luu tru ket qua cua a mu b
	    // ketqua = 1
	    int ketqua = 1;
	    while (b > 0) {
	        ketqua = ketqua * a;
	        b--;
	    }
	    cout << ketqua;
	    return 0;
	}
	
	// D�ng for
	#include<iostream>

	using namespace std;
	
	int main() {
	    int a, b;
	    cin >> a >> b;
	    int answer = 1;
	    for (; b > 0; answer *= a, b--); //// answer *= a tuong duong v?i answer = answer * a
	    cout << answer;
	    return 0;
	}
	

// Ban h�y viet chuong tr�nh nhap tu b�n ph�m hai so nguy�n a v� b. Sau d� hien thi ra m�n h�nh c�c so tu a toi b m� chia het cho ca 3 v� 5.
	// D�ng while 
	#include<iostream>

	using namespace std;
	
	int main() {
	    int a, b;
	    cin >> a >> b;
	
	    while (a <= b) {
	        if (a % 3 == 0 && a % 5 == 0) {
	            cout << a << " ";
	        }
	        a++;
	    }
	    return 0;
	}
	
	// D�ng for
	#include<iostream>

	using namespace std;
	
	int main() {
	    int a, b;
	    cin >> a >> b;
	    for (int i = a; i <= b; i++) {
	        if (i % 3 == 0 && i % 5 == 0) {
	            cout << i << " ";
	        }
	    }
	    return 0;
	}


// Do-while => thuc hien Do roi moi kiem tra while 
// Ban h�y viet chuong tr�nh hien thi ra m�n h�nh c�c so tu 1 toi 5 su dung v�ng lap do-while

	#include<iostream>
	
	using namespacing std;
	
	int main() {
		int i = 1;
		do {
			cout << i << " ";
			i++;
		}
		while (i <= 5);
		return 0;
		
// Ban h�y viet chuong tr�nh hien thi ra m�n h�nh c�c so c� so 0 o cuoi tu 1 toi 1000 (m�n h�nh se hien thi l�n c�c so 10, 20, 30, ..., 990, 1000)

	#include<iostream>
	
	using namespace std;
	
	int main() {
		int i = 1;
		do {
			if (i % 10 == 0) {
				cout << i << " ";
			}
			i++;
		}
		while (i <= 100);
	}
