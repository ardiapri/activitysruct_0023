#include <iostream>
using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs;
	cout << "nomor mahasiswa : ";
	cin >> mhs.nim;
	cout << "nama mahasiswa : ";
	cin >> mhs.nama;
	cout << "alamat mahasiswa : ";
	cin >> mhs.alamat;
	cout << "umur mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\nNim :" << mhs.nim;
	cout << "\nNama :" << mhs.nama;
	cout << "\nAlamat :" << mhs.alamat;
	cout << "\nUmur :" << mhs.umur;

}




