#include <iostream>
using namespace std;
int main() {
    int var1 = 10;
    double var2 = 20.5;
    char var3 = 'A';
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << (void*)&var3 << endl;
    return 0;
}
e-1,4 m-2,h-3