#include <iostream>
#include "set.h"
#include "console.h"
using namespace std;


Set<Set<string>> combinationsHelper(Set<string>& remaining, int k, Set<string>& chosen) {
    // Base case 1: your combination is full (found k graders)
    if (k == 0) {
        return { chosen };
    } else if (remaining.size() < k) { // Base case 2: there are not enough graders remaining
        return {};
    }

    // Recursive case
    // Choose
    string choice = remaining.first();
    remaining = remaining - choice;

    // Explore
    // Not including the person
    Set<Set<string>> without = combinationsHelper(remaining, k, chosen);

    // Including the person
    chosen = chosen + choice;
    Set<Set<string>> with = combinationsHelper(remaining, k - 1, chosen);

    // Undo
    remaining = remaining + choice;
    chosen = chosen - choice;

    return without + with;
}

Set<Set<string>> combinationsOf(Set<string>& options, int k) {
    Set<string> chosen = {};
    return combinationsHelper(options, k, chosen);
}

void combinationsDemo() {
    Set<string> possibleGraders = {
        "Bryant",
        "Grant",
        "Renn",
        "Roshan",
        "Trip",
    };

    Set<Set<string>> combinations = combinationsOf(possibleGraders, 3);
    cout << "There are " << combinations.size() << " combinations. They are: " << endl;
    for (Set<string> combination: combinations) {
        cout << combination << endl;
    }
}
