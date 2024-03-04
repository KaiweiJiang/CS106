/*
 * File: main.cpp
 * --------------
 * Simulates a rocket taking off by counting
 * down from 10 to 1, then printing "Liftoff!"
 */

#include <iostream>
#include "console.h"
#include "stack.h"
using namespace std;

const char SPACE = ' ';

// THIS CODE IS BUGGY
int main()
{
    string sentence = "the cat in the hat";
    string word;
    Stack<string> wordStack;

    cout << "Input sentence: " << sentence << endl;

    for (char c : sentence) {
        if (c != SPACE) {
            word += c;
        } else {
            wordStack.push(word);
            word = ""; // reset
        }
    }

    cout << "Output sentence: ";
    while (!wordStack.isEmpty()) {
        word = wordStack.pop();
        cout << word << SPACE;
    }
    cout << endl;

    return 0;
}
