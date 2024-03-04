/**
 * File: delete.cpp
 *
 * Implement linked list delete by
 * fixing buggy code.
 *
 */

#include "delete.h"
using namespace std;


void deleteNode(Node*& list, int value) {
    // traverse to node before value to delete
    Node* prev = nullptr;
    Node* cur = list;
    while (cur != nullptr && cur->data != value) {
        prev = cur;
        cur = cur->next;
    }
    // delete and rewire: BUGGY!
    Node* next = cur->next;
    delete cur;
    prev->next = next;
}


Node* createListRec(Vector<int> vals) {
    if (vals.isEmpty()) {
        return nullptr;
    }
    Node* cur = new Node;
    cur->data = vals.remove(0);
    // recursive!
    cur->next = createListRec(vals);
    return cur;
}


PROVIDED_TEST("Remove from middle") {
    Node* list = createListRec({1, 6, 5, 4, 7});
    EXPECT_NO_ERROR(deleteNode(list, 5));
    printList(list);
    freeList(list);
}

PROVIDED_TEST("Remove from front") {
    Node* list = createListRec({1, 6, 5, 4, 7});
    EXPECT_NO_ERROR(deleteNode(list, 1));
    printList(list);
    freeList(list);
}

PROVIDED_TEST("Remove from end") {
    Node* list = createListRec({1, 6, 5, 4, 7});
    EXPECT_NO_ERROR(deleteNode(list, 7));
    printList(list);
    freeList(list);
}

PROVIDED_TEST("Remove from length 1") {
    Node* list = createListRec({2});
    EXPECT_NO_ERROR(deleteNode(list, 2));
    printList(list);
    freeList(list);
}


