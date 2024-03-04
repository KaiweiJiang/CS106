#include <string>
#include "lexicon.h"
#include "testing/SimpleTest.h"

using namespace std;

bool isShrinkable(Lexicon& lex, string word) {
    // base case 1) reach invalid word
    if (!lex.contains(word)) {
        return false;
    }
    // base case 2) get down to single letter
    if (word.length() == 1) {
        return true;
    }

    // recursive case
    // try removing every letter and if any succeeds, return true
    for (int i = 0; i < word.length(); i++) {
        // TODO: recursive call!
    }

    // if we've exhausted every option, return false
    return false;
}

PROVIDED_TEST("Example cases of isShrinkable function from slides"){
    Lexicon lex("res/EnglishWords.txt");
    EXPECT(isShrinkable(lex, "startling"));
    EXPECT(isShrinkable(lex, "cart"));
    EXPECT(!isShrinkable(lex, "cusp"));
}
