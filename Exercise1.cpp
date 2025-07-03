/*
Write a function which takes 2 parameter and return the sum of those
In main function, call that new function and cout the result.alignas
int main() {
    sampleFfunction(3,4);
}
*/

#include <iostream> // input output stream
using namespace std;



int samplefunction(int first_parameter, int second_parameter) {

    int total = first_parameter + second_parameter;
    return total;
}

int main() {
    int result = samplefunction(3,4);
    cout << result;
    return 0;
}