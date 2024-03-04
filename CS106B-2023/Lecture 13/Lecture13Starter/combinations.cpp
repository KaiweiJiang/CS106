#include <iostream>
#include "set.h"
#include "console.h"
using namespace std;


Set<Set<string>> combinationsHelper(Set<string>& remaining, int k, Set<string>& chosen) {
    return {};
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
