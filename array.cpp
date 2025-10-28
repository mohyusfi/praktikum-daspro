#include <iostream>
#include <array>

using namespace std;

typedef array<string, 3> kue_t;
typedef array<int, 3> hargakue_t;


void read_array(const kue_t& array)
{
    cout << array.size();
}

int main()
{
    kue_t kue_tersedia = {"donat", "bolu", "kukis"};
    hargakue_t harga_kue = {5000, 10000};

    // read_array(kue_tersedia);
    cout << harga_kue.at(2);
}