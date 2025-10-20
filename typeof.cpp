#include <iostream>
#include <string>
#include <typeinfo>
#include <cxxabi.h>

using namespace std;

string clean_type(const type_info& ti) {
    int status;
    char* demangled = abi::__cxa_demangle(ti.name(), nullptr, nullptr, &status);
    string result = (status == 0) ? demangled : ti.name();
    free(demangled); // jangan lupa free
    return result;
}

int main() {
    int a = 5;
    double b = 3.14;
    string c = "halo";

    cout << clean_type(typeid(a)) << '\n';
    cout << clean_type(typeid(b)) << '\n';
    cout << clean_type(typeid(c)) << '\n';

    return 0;
}
