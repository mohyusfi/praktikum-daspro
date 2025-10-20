#include <iostream>

using namespace std;

int main()
{
    char nama[50], alias[20];
    int usia;

    cout << "Masukkan nama lengkap >> ";
    cin.getline(nama, 50);
    cout << "Masukkan umur >> ";
    cin >> usia;
    cout << "Masukkan nama panggilan >> ";
    cin >> alias;

    cout << "Namamu " << nama << "\nalias " << alias << "\nusiamu " << usia << " tahun." << endl;
    return 0;
}