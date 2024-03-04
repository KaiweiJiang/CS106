#include "testing/MemoryDiagnostics.h"
#include "simpio.h"

#pragma once

struct Node {
    int data;
    Node* next;

    TRACK_ALLOCATIONS_OF(Node); //  SimpleTest allocation tracking

    Node() {}

    Node(int d, Node* n) {
        data = d;
        next = n;
    }
};

void printList(Node* list);

void freeList(Node* list);
