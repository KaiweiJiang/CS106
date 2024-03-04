/**
 * File: createlist.cpp
 *
 * Implement two approaches to list contruction.
 *
 */

#include "createlist.h"
using namespace std;


// PROVIDED HELPER FUNCTION
void appendTo(Node*& list, int value) {
    // traverse to end
    Node* cur = list;
    while (cur != nullptr &&
           cur->next != nullptr) {
        cur = cur->next;
    }
    // create and append
    Node* newEnd = new Node;
    newEnd->data = value;
    newEnd->next = nullptr;
    if (cur != nullptr) {
        cur->next = newEnd;
    } else {
        list = newEnd;
    }
}


Node* createListWithAppend() {
    Node* list = nullptr;
    // TODO: IMPLEMENT ME!
    return list;
}


Node* createListWithTailPtr() {
    Node* head = nullptr;
    Node* tail = nullptr;
    // TODO: IMPLEMENT ME!
    return head;
}
