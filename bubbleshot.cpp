#include <iostream>
using namespace std;

int a[20];				// Deklarasi array a dengan ukuran 20
int n;					// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {			// Procedur untuk input 
	while (true) {		// Looping
		cout << "Masukan banyaknya elemen pada array : ";	// Output ke layar
		cin >> n;		// Input dari pengguna
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;		// Keluar dari loop
		else {			// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";	//Output ke layar
		}
	}
	cout << endl;							// Output baris kosong
	cout << "===================" << endl;	// Output ke layar
	cout << "Masuka Elemen Array" << endl;	// Output ke layar
	cout << "===================" << endl;	// Output ke layar

	for (int i = 0; i < n; i++) {			// Looping denngan i dimulai dari 0 hingga n-1
		cout << "Data ke-n" << (i + 1) << ": ";		// Output ke layar
		cin >> a[i];						// Input dari pengguna
	}
}

void BubbleSortArray() {	// Prosedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {	// Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - 1; j++) {	// Loopping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {			// Jika nilai pada a[1] lebih besar dari a[j+1]
				int temp = a[j];			// Simpan nilai [j] ke variabel sementara temp
				a[j] = a[j + 1];			// Asign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			// Asign nilai temp ke a[j+1]
			}
		}
	}
}

void unsorted() {
	cout << endl;		// Output baris kosong
	cout << "================================= " << endl;	// Output baris kosong
	cout << "Element Array yang belum tersusun " << endl;	// Output baris layar
	cout << "==================================" << endl;	// Output baris kosong
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
}

void display() {	// Procedur untuk menampilkan hasil
	cout << endl;	//Output baris kosong
	cout << "=================================" << endl;	//Output ke layar
	cout << "Element Array yang telah tersusun" << endl;	//Output ke layar
	cout << "=================================" << endl;	//Output ke layar
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;	//Output ke layar
	}
	cout << endl;	//Output ke layar
}

int main() {			// Memanggil prosedur input()
	input();			// Memanggil prosedur unsorteda() dari
	unsorted();			// Memanggil prosedur bubblesortarray()
	BubbleSortArray();	// Memanggil prosedur display()
	display();
	return 0;
}