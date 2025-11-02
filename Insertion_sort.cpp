
#include <iostream>
using namespace std;

struct Node {
    int a; 
    Node* next;
    Node* prev;
};

int swap_next(Node* swap_element, Node* begin_value){
    /* swap swap_element <-> swap_element->next */
    Node* cache = begin_value;

    while (cache != nullptr){
        if (cache->next == swap_element) {
            cache->next = swap_element->next;
            swap_element->next = cache->next->next;
            cache->next->next=swap_element;
            break;
        }
        cache = cache->next;
    }
    return 0;
}

int swap(Node* swap_element1,Node* swap_element2,Node* begin_value){

    //Getting the value (run through the list)
    Node* cache = begin_value;
    Node    *prev_element1, *prev_element2, *next_element1, *next_element2;

    while (cache->next != NULL){
        if (cache->next == swap_element1) {
            prev_element1 = cache;
        }
        if (cache->next == swap_element2) {
           prev_element2 = cache;
        }
        if (cache == swap_element1) {
            next_element1 = cache->next;
        }
        if (cache == swap_element2) {
            next_element2 = cache->next;
        }
        cache = cache ->next;
    }
    prev_element1->next = swap_element2; // (Prev -> next) of 1 = element 2
    swap_element2->next = next_element1; // Next element of 2 = (Originally) Next element of 1

    prev_element2->next = swap_element1; // (Prev -> next) of 2 = element 1
    swap_element1->next = next_element2; // Next element of 1 = (Originally) Next element of 2


    return 0;
}

int insertion_sort(Node* begin_value){

    Node* cache = begin_value;
    for (int i=0; i<4; i++) {
        while (cache ->next != nullptr){

            if (cache->next->a < cache->a) {
            cout << "'Call swap_next " << cache->a << "<->" <<cache->next->a << endl;
            swap_next(cache, begin_value);
            /*
           // Swapping stuff (cache->next) ~ (cache)
            Node* cache_next = cache->next;
            Node* next_next = cache_next ->next;
            Node* cache_prev = cache -> prev;
        
            //Changing next values
            cache->next = cache_next->next;
            cache_next->next = cache;

            //Changing previous values
            cache_next->prev = cache->prev;
            cache->prev = cache_next;

            //Changing parameters arround cache
            next_next -> prev = cache;
            cache_prev -> next = cache_next;
            */
           cache = cache ->next;
        }

            else {
            // If nothing goes wrong
                cache = cache ->next;
            }
        };

    }
    return 0;
}

int main() {
    Node n1, n2, n3, n4;

    n1.a = 3;
    n1.next = &n2;
    n1.prev = NULL;

    n2.a = 8;
    n2.next = &n3;
    n2.prev = &n1;

    n3.a = 6;
    n3.next = &n4;
    n3.prev = &n2;

    n4.a = 4;
    n4.next = NULL;
    n4.prev = &n3;

    insertion_sort(&n1);
    Node* cache = &n1;

    while (cache != NULL) {
        cout << cache->a << "-";
        cache = cache->next;
    }
    return 0;
}