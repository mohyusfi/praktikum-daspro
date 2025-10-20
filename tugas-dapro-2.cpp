#include <iostream>

using namespace std;

int main()
{
    // nomor 1
    // bisa bernilai positif dan negatif
    signed int angka_satu = 10000000;
    signed int angka_dua = -10000000;

    // unsigned >= 0    
    unsigned int angka_tiga = 123;

    // default variable itu signed
    int angka_empat = 100;
    int angka_lima = -100;

    cout << "=====================================" << endl;
    cout << "soal 1" << endl;
    cout << "angka_satu: " << angka_satu << endl;
    cout << "angka_dua: " << angka_dua << endl;
    cout << "angka_tiga: " << angka_tiga << endl;
    cout << "angka_empat: " << angka_empat << endl;
    cout << "angka_lima: " << angka_lima << endl;

    // nomor 2
    cout << "=====================================" << endl;
    cout << "soal 2" << endl;
    cout << sizeof(angka_lima) << " byte" << endl;
    cout << sizeof(string) << " byte" << endl;

    // nomor 3
    string name = "ekel";
    cout << "=====================================" << endl;
    cout << "soal 3" << endl;
    cout << "type dari name " << typeid(name).name() << endl;
}