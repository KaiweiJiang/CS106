#include <iostream>
#include "console.h"
#include "strlib.h"
#include "set.h"
#include "testing/SimpleTest.h"
#include "prototypes.h"
using namespace std;

void listSubsets(Set<std::string>& choices);

int main() {

    Set<string> friends = {"Amrita", "Elyse", "Taylor"};
    listSubsets(friends);


//    combinationsDemo();

    return 0;
}
