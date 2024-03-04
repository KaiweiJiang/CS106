#include <iostream>
#include "console.h"
#include "SimpleTest.h"
#include "simpio.h"
#include "traversals.h"
using namespace std;

int main() {
    if (runSimpleTests(SELECTED_TESTS)){
        return 0;
    }

    Node* list = createList({1, 2, 3, 4, 5});
    printList(list);
    return 0;
}




