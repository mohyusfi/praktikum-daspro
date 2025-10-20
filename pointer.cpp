#include <iostream>

using namespace std;

void change(int &a)
{
    // int b = 10;
    a = 1000000;
}

int main()
{
    int a;
    change(a);
    cout << a;
}