#include <iostream>
#include "set.h"

using namespace std;

void listSubsetsHelper(Set<string>& remaining, Set<string>& chosen) {
    // Base case
    if (remaining.isEmpty()) {
        cout << chosen << endl;
        return;
    }

    // Recursive case
    // Pick a person from remaining (choose)
    string current = remaining.first();
    remaining = remaining - current;

    // 1. Don't include the person (explore 1)
    listSubsetsHelper(remaining, chosen);

    // 2. Include the person (explore 2)
    chosen = chosen + current;
    listSubsetsHelper(remaining, chosen);

    // Unchoose
    chosen = chosen - current;
    remaining = remaining + current;
}

void listSubsets(Set<string>& choices) {
    Set<string> tracked;
    listSubsetsHelper(choices, tracked);
}

