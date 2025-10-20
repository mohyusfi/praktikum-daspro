#include <iostream>

using namespace std;

#define X 5;
#define sayHello() cout << 4 + 4 << endl;

typedef unsigned int hello;

int main()
{
    // int x = X;
    // int result = x + 4;

    sayHello();

    hello y = -1;

    cout << y << endl;

    // cout << "Hasil " << result << endl;

    cout << sizeof(short int) << endl;
}