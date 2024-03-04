#include <iostream>
#include "console.h"
using namespace std;

void generatePermutations(string word);

void runPermutationsDemo() {
    generatePermutations("TEYPT");
}

// This code is complete, nothing TODO here :)

void generatePermutationsHelper(string lettersRemaining, string sequence) {
    // Base case: lettersRemaining = 0, no more letters
    if (lettersRemaining.length() == 0) {
        cout << sequence << endl;
    } else {
        // Recursive cases (when lettersRemaining > 0)
        for (int i = 0; i < lettersRemaining.length(); i++) {
            char letter = lettersRemaining[i];
            generatePermutationsHelper(lettersRemaining.substr(0, i) + lettersRemaining.substr(i + 1),
                                       sequence + letter);
        }
    }
}

void generatePermutations(string word) {
    generatePermutationsHelper(word, "");
}
