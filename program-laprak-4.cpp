#include <iostream>
using namespace std;

float a = 10, b = 15, c = 7, d = 1;
float e, f; 
int g;
int main()
{
    e = a * b / c - d;
    f = b / 5 / 9 * a - d;
    g = (e > f) && (b != e);

    cout << "Hasil = " << g << endl;
    return 0;
}