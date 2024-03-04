/**
 * File: traversals.cpp
 *
 * Implement three functions that involve traversing
 * the entire length of a linked list.
 *
 */

#include "traversals.h"
using namespace std;

void printList(Node* list) {
    // TODO: print the data of every node in the list
}

int measureList(Node* list) {
    // TODO: return the number of nodes in this list
    return -1;
}

void freeList(Node* list) {
    // TODO: delete each node in this list, freeing all memory
}

// Provided helper function to create a linked list from a Vector
Node* createList(Vector<int> vals) {
    if (vals.isEmpty()) {
        return nullptr;
    }
    Node* cur = new Node;
    cur->data = vals.remove(0);
    // recursive!
    cur->next = createList(vals);
    return cur;
}

// Test print function from main.cpp

PROVIDED_TEST("Test measure and free functions") {
    Node* list1 = createList({1, 2, 3, 4, 5});
    EXPECT_EQUAL(measureList(list1), 5);

    Node* list2 = createList({1});
    EXPECT_EQUAL(measureList(list2), 1);

    Node* list3 = createList({});
    EXPECT_EQUAL(measureList(list3), 0);

    freeList(list1);
    freeList(list2);
    freeList(list3);
}




