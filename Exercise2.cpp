/*
Write a function which takes 2 parameter.
If the product of those bigger than 20, print("The result is too big")
If the product is less than or equal to 20, print("'hello") as many as the product
*/

#include <iostream> // input output stream
using namespace std;



int samplefunction(int first_parameter, int second_parameter) {

    int product = first_parameter * second_parameter;
    if (product > 20) {
        cout << "The result is too big";
    }
    if (product < 20) {
        for (int i=1;i<=product;i++) {
            cout << "hello" << endl;
        }
    }
    return 0;

}

int main() {

    samplefunction(5,5);
    return 0;
}