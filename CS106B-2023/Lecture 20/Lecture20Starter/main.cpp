#include "console.h"
#include "SimpleTest.h"
#include "createlist.h"
#include "listutils.h"

using namespace std;

int main() {
    if (runSimpleTests(SELECTED_TESTS)){
        return 0;
    }

    Node* appendList = createListWithAppend();
    printList(appendList);
    freeList(appendList);

    Node* tailList = createListWithTailPtr();
    printList(tailList);
    freeList(tailList);

    return 0;
}




