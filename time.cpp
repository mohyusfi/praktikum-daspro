#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    int jamSatuHari = 24;
    auto now = system_clock::now();
    auto pengembalian = now + hours(jamSatuHari * 10);
    time_t waktu = system_clock::to_time_t(now);
    time_t waktuPengembalian = system_clock::to_time_t(pengembalian);
    

    cout << ctime(&waktuPengembalian) << endl;
}