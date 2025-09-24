#include <iostream>
using namespace std;

int main () {

  float harga[3] = {};
  string produk[3] = {};
  int diskon;
  float jumlah_harga_belum_diskon;
  float bayar;
  float potongan;

  for (int i = 0; i < 3; i++) {
    cout << "\nMasukkan barang yang akan dibeli \nGula (Rp.20000)\nMinyak (Rp35000)\nTomat (Rp.2000) (" << i+1 << "/3) : ";
    cin >> produk[i];
    cout << "Masukkan harga barang tersebut (" <<i+1 << "/3) : ";
    cin >> harga[i];
  }

  cout << "\nMasukkan diskon dalam persen: "; cin >> diskon;
  jumlah_harga_belum_diskon = harga[0] + harga[1] + harga[2];
  potongan = (100 - diskon) * 0.01;
  bayar = jumlah_harga_belum_diskon * potongan;

  cout << "\tBelanja \n------------------------------------" << endl;
  cout << "No\tBelanjaan\tHarga" << endl;
  for (int i = 0; i < 3; i++) {
    cout << i+1 << ".\t" << produk[i] << " \t\tRp. " << harga[i] << endl;
  }
  cout << "------------------------------------\n" 
    << "Diskon\t\t\t" << diskon << "%\n" << "Total\t\t\tRp. " 
    << jumlah_harga_belum_diskon << "\n\t\t\t----------(-)\nBayar\t\t\tRp. " << bayar << endl;

  return 0;
}
