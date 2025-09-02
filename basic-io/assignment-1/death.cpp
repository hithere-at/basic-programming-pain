#include <iostream>
using namespace std;

int main() {

	int jumlah_sks = 0;
	int sks_input;

	string nim;
	string nama;
	string mk1, mk2, mk3, mk4, mk5;

	cout << "NIM: ";
	cin >> nim;

	cout << "Nama: ";
	cin >> nama;

	cout << endl << "Silahkan pilih dengan memasukkan angka SKS dan nama mata kuliahnya" << endl
	<< "1. PemDas (5 SKS)" << endl
	<< "2. SisDig (4 SKS)" << endl
	<< "3. PIK (2 SKS)" << endl
	<< "4. BhsIndonesia (2 SKS)" << endl
	<< "5. MatKom (3 SKS)" << endl
	<< "6. BhsInggris (2 SKS)" << endl;
	cout << "Input SKS (1/5): ";
	cin >> sks_input;
	cout << "Input Mata Kuliah (1/5): ";
	cin >> mk1;
	jumlah_sks += sks_input;

	cout << endl << "Silahkan pilih dengan memasukkan angka SKS dan nama mata kuliahnya" << endl
	<< "1. PemDas (5 SKS)" << endl
	<< "2. SisDig (4 SKS)" << endl
	<< "3. PIK (2 SKS)" << endl
	<< "4. BhsIndonesia (2 SKS)" << endl
	<< "5. MatKom (3 SKS)" << endl
	<< "6. BhsInggris (2 SKS)" << endl;
	cout << "Input SKS (2/5): ";
	cin >> sks_input;
	cout << "Input Mata Kuliah (2/5): ";
	cin >> mk2;
	jumlah_sks += sks_input;

	cout << endl << "Silahkan pilih dengan memasukkan angka SKS dan nama mata kuliahnya" << endl
	<< "1. PemDas (5 SKS)" << endl
	<< "2. SisDig (4 SKS)" << endl
	<< "3. PIK (2 SKS)" << endl
	<< "4. BhsIndonesia (2 SKS)" << endl
	<< "5. MatKom (3 SKS)" << endl
	<< "6. BhsInggris (2 SKS)" << endl;
	cout << "Input SKS (3/5): ";
	cin >> sks_input;
	cout << "Input Mata Kuliah (3/5): ";
	cin >> mk3;
	jumlah_sks += sks_input;

	cout << endl << "Silahkan pilih dengan memasukkan angka SKS dan nama mata kuliahnya" << endl
	<< "1. PemDas (5 SKS)" << endl
	<< "2. SisDig (4 SKS)" << endl
	<< "3. PIK (2 SKS)" << endl
	<< "4. BhsIndonesia (2 SKS)" << endl
	<< "5. MatKom (3 SKS)" << endl
	<< "6. BhsInggris (2 SKS)" << endl;
	cout << "Input SKS (4/5): ";
	cin >> sks_input;
	cout << "Input Mata Kuliah (4/5): ";
	cin >> mk4;
	jumlah_sks += sks_input;

	cout << endl << "Silahkan pilih dengan memasukkan angka SKS dan nama mata kuliahnya" << endl
	<< "1. PemDas (5 SKS)" << endl
	<< "2. SisDig (4 SKS)" << endl
	<< "3. PIK (2 SKS)" << endl
	<< "4. BhsIndonesia (2 SKS)" << endl
	<< "5. MatKom (3 SKS)" << endl
	<< "6. BhsInggris (2 SKS)" << endl;
	cout << "Input SKS (5/5): ";
	cin >> sks_input;
	cout << "Input Mata Kuliah (5/5): ";
	cin >> mk5;
	jumlah_sks += sks_input;

	cout << endl << "-----KARTU RENCANA STUDI-----" << endl
	<< "Nama: " << nama << endl
	<< "NIM: " << nim << endl
	<< "Mata Kuliah: " << endl
	<< "  1. " << mk1 << endl
	<< "  2. " << mk2 << endl
	<< "  3. " << mk3 << endl
	<< "  4. " << mk4 << endl
	<< "  5. " << mk5 << endl
	<< "SKS: " << jumlah_sks << endl;

	return 0;
}
