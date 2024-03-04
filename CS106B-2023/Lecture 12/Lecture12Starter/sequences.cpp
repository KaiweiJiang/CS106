#include <iostream>
#include "console.h"
using namespace std;

void generateSequences(int flipsRemaining);

void runSequencesDemo() {
    generateSequences(3);
}

void generateSequenceHelper(int flipsRemaining, string sequence) {
    // base case: out of flips
    if (flipsRemaining == 0) {
        cout << sequence << endl;
    } else {
        // recursive case: flip H or T
        // TODO: recursive calls
    }
}

void generateSequences(int numCoins) {
    generateSequenceHelper(numCoins, "");
}
