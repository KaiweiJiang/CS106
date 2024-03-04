#include "listutils.h"

using namespace std;

void printList(Node* list) {
    while (list != nullptr) {
        cout << list->data << endl;
        list = list->next;
    }
}

void freeList(Node* list) {
    Node* cur = list;
    while (cur != nullptr) {
        cur = cur->next;
        delete list;
        list = cur;
    }
}
