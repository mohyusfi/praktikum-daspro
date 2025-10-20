#include <iostream>

using namespace std;

int main()
{
    // Tipe Karakter
    char myChar = 'A';
    unsigned char myUnsignedChar = 200;
    signed char mySignedChar = -100;

    // Tipe Integer (Bilangan Bulat)
    int myInt = -12345;
    unsigned int myUnsignedInt = 12345;
    signed int mySignedInt = -54321; // 'int' secara default sudah 'signed'

    // Tipe Short Integer
    short int myShortInt = -1000;
    unsigned short int myUnsignedShortInt = 65000;
    signed short int mySignedShortInt = -32000;

    // Tipe Long Integer
    long int myLongInt = -123456789;
    unsigned long int myUnsignedLongInt = 123456789; 
    signed long int mySignedLongInt = -987654321;

    // Tipe Floating-Point (Bilangan Desimal)
    float myFloat = 3.14f; // 'f' menandakan float
    double myDouble = 3.1415926535;
    long double myLongDouble = 3.141592653589793238L; // 'L' menandakan long double

    // Tipe Boolean
    bool myBool = true; // bisa bernilai true atau false

    // Anda bisa mencetak nilai-nilai ini untuk melihat hasilnya
    // Contoh:
    cout << "Nilai myInt: " << myInt << endl;
    cout << "Nilai myCharUnsign: " << myUnsignedChar << endl;
    cout << "Nilai myFloat: " << myFloat << endl;
    cout << "Nilai myBool: " << myBool << endl; // Akan mencetak 1 untuk true, 0 untuk false

    return 0;
}