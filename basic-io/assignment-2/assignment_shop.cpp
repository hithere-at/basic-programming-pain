#include <iostream>
using namespace std;

int main() {

    // hmm variables
    int harga1, harga2, harga3;
    string barang1, barang2, barang3;

    int diskon_input;
    float diskon_asli;

    float harga_total;
    float selisih_diskon;

    // input harga dan barang ke 1
    cout << "Barang:" << endl
    << "  1. Gula (Rp. 20000)" << endl
    << "  2. Minyak (Rp. 35000)" << endl
    << "  3. Tomat (Rp. 2000)" << endl;

    cout << "Masukkan nama barang yang akan dibeli (1/3): ";
    cin >> barang1;
    cout << "Masukkan harga barang yang akan dibeli (1/3): ";
    cin >> harga1;

    // input harga dan barang ke 2
    cout << endl << "Barang:" << endl
    << "  1. Gula (Rp. 20000)" << endl
    << "  2. Minyak (Rp. 35000)" << endl
    << "  3. Tomat (Rp. 2000)" << endl;

    cout << "Masukkan nama barang yang akan dibeli (2/3): ";
    cin >> barang2;
    cout << "Masukkan harga barang yang akan dibeli (2/3): ";
    cin >> harga2;

    // input harga dan barang ke 3
    cout << endl << "Barang:" << endl
    << "  1. Gula (Rp. 20000)" << endl
    << "  2. Minyak (Rp. 35000)" << endl
    << "  3. Tomat (Rp. 2000)" << endl;

    cout << "Masukkan nama barang yang akan dibeli (3/3): ";
    cin >> barang3;
    cout << "Masukkan harga barang yang akan dibeli (3/3): ";
    cin >> harga3;

    // input diskon
    cout << endl << "Masukkan diskon dalam bentuk persen: ";
    cin >> diskon_input;

    diskon_asli = diskon_input / 100.0;
    harga_total = harga1 + harga2 + harga3;
    selisih_diskon = diskon_asli * harga_total;

    // kelihatan bagus di outputnya, tapi mimpi buruk untuk yang membaca kodenya
    cout << endl << "Belanja:" << endl;
    cout << "  1. \t" << barang1 << "\t" << harga1 << endl;
    cout << "  2. \t" << barang2 << "\t" << harga2 << endl;
    cout << "  3. \t" << barang3 << "\t" << harga3 << endl;
    cout << "-------------------------------------------" << endl;
    cout << "  Total: \t" << harga_total << endl;
    cout << "  Diskon: \t" << selisih_diskon << endl;
    cout << "\t\t------- (-)" << endl;
    cout << "  Bayar: \t" << harga_total - selisih_diskon << endl;

    return 0;
}
