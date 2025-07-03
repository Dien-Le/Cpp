#include <iostream> // input output stream
using namespace std;


int a[] = {3,15,2,1};

int min() {
    // Trying to run a sort function here
    int min_var = 10;
    int min_x;
    for (int x=0;x<4;x++) {

        if ((a[x] > 0)){
            min_var = a[x];
            min_x = x;
        } else if ( (a[x] > 0) && (a[x] < min_var)) {
            min_var = a[x];
            min_x = x;
        }
            
    }
    a[min_x] = 0;
    return min_var;

}

int main() {


    // 3 15 10 -> 3 10 15 -> selection srt
    for (int x = 0; x<4; x++) {
        int temp = min();
        cout << temp << endl;
         
    }

    return 0;
}

    // cout << a[1];
    // a[2] = 10;

    // for (int x = 0; x<3; x++) {
    //     cout << a[x] << "-";
    // }
// 
    // // 10-5-3
    // for (int x = 2;x>=0;x--) {
    //     cout << a[x] << "-";
    // }

    // find min
