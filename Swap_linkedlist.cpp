#include <iostream>
using namespace std;

struct Node {
    int a; 
    Node* b;
};

int swap(Node* swap_element1,Node* swap_element2,Node* begin_value){

    //Getting the value (run through the list)
    Node* cache = begin_value;

    while (cache->b != NULL){
        if (cache->b == swap_element1) {
            Node* prev_element1 = cache;
        }
        if (cache->b == swap_element2) {
            Node* prev_element2 = cache;
        }
        if (cache == swap_element2) {
            Node* swap_element1 = cache;
        }
        if (cache == swap_element2) {
            Node* swap_element2 = cache;
        }
        cache = cache ->b;
    }

    

    return 0;


}

int main() {
    Node n1, n2, n3, n4;

    n1.a = 3;
    n1.b = &n2;

    n2.a = 5;
    n2.b = &n3;

    n3.a = 8;
    n3.b = &n4;

    n4.a = 6;
    n4.b = NULL;

    swap(&n2,&n4,&n1);
    return 0;
}

