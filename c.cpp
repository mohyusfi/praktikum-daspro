#include <iostream>

using namespace std;

int tambah(int a, int b){
    return a + b;
}

void prodesur_tambah(int a, int b) {
    cout << a + b << endl;
}


int main() {
    tambah(10, 10);
    tambah(1, 2);
}
