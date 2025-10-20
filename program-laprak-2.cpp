#include <iostream>
using namespace std;

int main(){
    const string UNIVERSITAS = "Universitas Tadulako";
    const int TAHUN_MASUK = 2025;

    const string stambuk = "F5512520085";
    const string nama = "Dimas";
    int umur = 19;

    cout << "Hi, nama saya " << nama << endl;
    cout << "Stambuk saya " << stambuk << endl;
    cout <<"Umur saya " << umur << " tahun" << endl;
    cout << "Saya kuliah di " << UNIVERSITAS << endl;
    cout << "dan masuk tahun " << TAHUN_MASUK << endl;

    system("pause");
    return 0;
}