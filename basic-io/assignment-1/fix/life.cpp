#include <iostream>
#include <string>
using namespace std;

int main () {
  int jumlah_sks = 0;
  int options;

  string nama;
  string nim;
  string listed[6] = {};

  cout << "Nama: ";
  getline(cin, nama);
  cout << "\nNIM: ";
  cin >> nim;

  for (int i = 0; i < 6; i++){
    cout << "Silakan pilih dengan memasukkan angka SKS dan nama mata kuliahnya\n1. PemDas (5 SKS) \n2. SisDig (4 SKS) \n3. PIK (2 SKS) \n4. BhsIndonesia (2 SKS) \n5. MatKom (3 SKS) \n6. BhsInggris (2 SKS)"<< "Input opsi 1-6: ";
    cin >> options;
    switch (options) {
      case 1:
        listed[i] = "PemDas";
        jumlah_sks += 5;
        break;
      case 2:
        listed[i] = "SisDig";
        jumlah_sks += 4;
        break;
      case 3:
        listed[i] = "PIK";
        jumlah_sks += 2;
        break;
      case 4:
        listed[i] = "BhsIndonesia";
        jumlah_sks += 2;
        break;
      case 5:
        listed[i] = "MatKom";
        jumlah_sks += 3;
        break;
      case 6:
        listed[i] = "BhsInggris";
        jumlah_sks += 2;
        break;
      default:
        listed[i] = "invalid input";
    }
  }

  cout << "----Kartu Rencana Studi----" << endl;
  cout << "Nama: " << nama << "\nNIM: " << nim << endl;

  for (int i = 0; i < 6; i++) {
    cout << "Matkul " << i+1 << " "<< listed[i] << endl;
  }
  cout << "Jumlah SKS: " << jumlah_sks << endl;
  return 0;
}
