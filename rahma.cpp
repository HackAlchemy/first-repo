#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Warga {
  string nama;
  string alamat;
  string agama;
  string jeniskelamin;
};

vector<Warga> dataWarga;

void tambahWarga() {
  Warga wargaBaru;

  cout << "Nama: ";
  cin >> wargaBaru.nama;

  cout << "Alamat: ";
  cin >> wargaBaru.alamat;

  cout << "Agama: ";
  cin >> wargaBaru.agama;

  cout << "jenis kelamin: ";
  cin >> wargaBaru.jeniskelamin;

  dataWarga.push_back(wargaBaru);

  cout << "Data warga berhasil ditambahkan!" << endl;
}

void tampilkanData() {
  if (dataWarga.empty()) {
    cout << "Tidak ada data warga yang tersedia." << endl;
    return;
  }

  cout << "==========================================" << endl;
  cout << "|         Daftar Data Warga           |" << endl;
  cout << "==========================================" << endl;

  for (int i = 0; i < dataWarga.size(); i++) {
    Warga warga = dataWarga[i];

    cout << "No. " << i + 1 << endl;
    cout << "Nama: " << warga.nama << endl;
    cout << "Alamat: " << warga.alamat << endl;
    cout << "Agama: " << warga.agama << endl;
    cout << "jenis kelamin: " << warga.jeniskelamin << endl;
  }

  cout << "==========================================" << endl;
}

int main() {
  int pilihan;

  do {
    cout << "Menu Pendataan Warga" << endl;
    cout << "1. Tambah Warga" << endl;
    cout << "2. Tampilkan Data" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1:
        tambahWarga();
        break;
      case 2:
        tampilkanData();
        break;
      case 3:
        cout << "Keluar dari program." << endl;
        break;
      default:
        cout << "Pilihan tidak valid." << endl;
    }
  } while (pilihan != 3);

  return 0;
}
