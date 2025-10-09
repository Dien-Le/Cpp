
#include <iostream>
using namespace std;

struct Node {
    int a; 
    Node* b;
};

int insertion(Node* begin_value){

    Node* cache = begin_value;
    while (cache ->b != NULL);
    {
        if (cache->b->a < cache->a);
        // Backtracking
            
        else {
        // If nothing goes wrong
            Node* prev = cache;
            cache = cache ->b;
        }
    }

    return 0;

}

int main() {
    Node n1, n2, n3, n4;

    n1.a = 3;
    n1.b = &n2;

    n2.a = 6;
    n2.b = &n3;

    n3.a = 8;
    n3.b = &n4;

    n4.a = 4;
    n4.b = NULL;

    insertion(&n2);

    return 0;
}