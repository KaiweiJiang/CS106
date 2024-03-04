#pragma once
#include "vector.h"
#include "SimpleTest.h"
#include "testing/MemoryDiagnostics.h"

struct Node {
    int data;
    Node* next;

    TRACK_ALLOCATIONS_OF(Node); //  SimpleTest allocationg tracking
};

void printList(Node* list);

Node* createList(Vector<int> vals);
