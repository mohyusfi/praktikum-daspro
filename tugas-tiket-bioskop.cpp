#include <iostream>

using namespace std;

void tampilkanServices();
void tampilkanTiket();
void hitungTotalHarga(int &totalHarga, int hargaTiket, int jumlah);
void generateDetail(string namaFilm, int hargaTiket, int jumlahTiket, int totalHarga);


int main()
{
    string namaFilm;
    int hargaTiket;
    int jumlahTiket;
    int totalHarga;

    int inputPilihanMenu, inputPilihanTiket;

    tampilkanServices();

    cout << "pilih menu! ";
    cin >> inputPilihanMenu;

    if (inputPilihanMenu >= 1 && inputPilihanMenu <= 2)
    {
        switch (inputPilihanMenu)
        {
        case 1:
            tampilkanTiket();
            break;
        
        case 2:
            tampilkanTiket();
            cout << "pilih tiket! ";
            cin >> inputPilihanTiket;
            
            if (inputPilihanTiket >= 1 && inputPilihanTiket <= 2)
            {
                cout << "jumlah? ";
                cin >> jumlahTiket;

                switch (inputPilihanTiket)
                {
                case 1:
                    namaFilm = "TUKAR TAKDIR";
                    hargaTiket = 55000;
                    hitungTotalHarga(totalHarga, hargaTiket, jumlahTiket);
                    generateDetail(namaFilm, hargaTiket, jumlahTiket, totalHarga);
                    break;
                case 2:
                    namaFilm = "TRON: ARES";
                    hargaTiket = 60000;
                    hitungTotalHarga(totalHarga, hargaTiket, jumlahTiket);
                    generateDetail(namaFilm, hargaTiket, jumlahTiket, totalHarga);
                    break;
                }
            } else {
                cout << "pilihan tiket tidak tersedia" << endl;
            }
            break;
        }
    } else {
        cout << "pilihan tidak tersedia" << endl;
    }
}

void tampilkanServices()
{
    cout << "===================================\n";
    cout << "\tPEMESANAN TIKET YUSFI" << endl;
    cout << "===================================\n";
    cout << "1. List Tiket" << endl;
    cout << "2. Pesan Tiket" << endl;
}

void tampilkanTiket()
{
    cout << "\nList tiket" << endl;
    cout << "1. TUKAR TAKDIR" << endl;
    cout << "2. TRON: ARES" << endl;
}

void hitungTotalHarga(int &totalHarga, int hargaTiket, int jumlah)
{
    totalHarga = hargaTiket * jumlah;
}

void generateDetail(string namaFilm, int hargaTiket, int jumlahTiket, int totalHarga)
{
    cout << "\n\n";
    cout << "===================================" << endl;
    cout << "\tDETAIL PEMBAYARAN" << endl;
    cout << "===================================" << endl;
    cout << "Film\t\t: " << namaFilm << endl;
    cout << "Harga Tiket\t: " << "Rp" << hargaTiket<< endl;
    cout << "Jumlah Tiket\t: " << jumlahTiket << endl;
    cout << "Total Harga\t: " << "Rp" << totalHarga << endl;
    cout << "===================================" << endl;
}