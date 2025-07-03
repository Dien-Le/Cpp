#include <iostream> // input output stream
using namespace std;

int HelloFfunction(int sampleParam) {
    for (int a = 0; a < sampleParam; a++) {
        cout << "Hi " << a <<endl;
    }
    return 0;
}

int main() {
    cout << "'Hello" << endl;
    float abc;
    abc = 10;
    cout << abc;

    abc = abc+2;
    cout <<abc;

    abc = abc+2.5;
    cout <<abc;

    for (int i=0;i<=10;i++){
        cout << "Hello " << i << endl;
    }

    int a = 10;
    if (a<2) {
        cout << "true";
    } else {
        cout << "false";
    }

    HelloFfunction(2);

    return 0;
}