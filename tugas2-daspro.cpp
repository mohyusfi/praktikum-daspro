#include <iostream>
#include <iomanip>
using namespace std;

struct GajiDosen {
    int gajiPokok;
    int tunjIstri;
    int tunjAnak;
    int iuran;
    float pajak;
    float bpjs;
};

int main() {
    GajiDosen dosen;

    dosen.gajiPokok = 3500000;
    dosen.tunjIstri = 300000;
    dosen.tunjAnak = 250000;
    dosen.iuran = 200000;

    int gajiKotor = dosen.gajiPokok + dosen.tunjIstri + dosen.tunjAnak;
    int gajiSetelahIuran = gajiKotor - dosen.iuran;

    dosen.pajak = 0.05f * gajiSetelahIuran;
    dosen.bpjs  = 0.01f * gajiSetelahIuran;

    float gajiBersih = gajiSetelahIuran - dosen.pajak - dosen.bpjs;

    cout << fixed << setprecision(0);

    cout << "=== PERHITUNGAN GAJI DOSEN ===\n";
    cout << "Gaji Pokok        : Rp " << dosen.gajiPokok << endl;
    cout << "Tunjangan Istri   : Rp " << dosen.tunjIstri << endl;
    cout << "Tunjangan Anak    : Rp " << dosen.tunjAnak << endl;
    cout << "Iuran Wajib       : Rp " << dosen.iuran << endl;
    cout << "Pajak (5%)        : Rp " << dosen.pajak << endl;
    cout << "BPJS (1%)         : Rp " << dosen.bpjs << endl;
    cout << "----------------------------------------\n";
    cout << "Total Gaji Bersih/Gaji setiap bulan : Rp " << gajiBersih << endl;

    return 0;
}