#include <iostream> // input output stream
using namespace std;

int min(int &a ) { // Ppass by reference
//int min(int a ) { // Pass by value
    a = 100;
    cout << &a << endl; // Aaddress/Rreference
    // 0x 149a5ff6fc
    return 0;
}

int main() {
    int x = 5;
    cout << &x << endl;
    min(x);

    cout << x; //
    return 0;
}