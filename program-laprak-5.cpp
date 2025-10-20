#include <iostream>

using namespace std;
int main()
{
    double berat, tinggi;

    cout << "Berat badan (kg) = ";
    cin >> berat;

    cout << "Tinggi badan (m) = ";
    cin >> tinggi;

    double imt = berat / (tinggi * tinggi);

    string kriteria;
    if (imt <= 18.5)
    {
        kriteria = "kurus";
    } else if (imt <= 25)
    {
        kriteria = "normal";
    } else if (imt <= 30)
    {
        kriteria = "gemuk";
    } else {
        kriteria = "kegemukan";
    }
    
    cout << "Nilai Imt anda " << imt << " anda termasuk kriteria " << kriteria << "." << endl;
    return 0;
}