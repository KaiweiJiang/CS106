/*
 * File: main.cpp
 * --------------
 * Test how a helper function doubles a vector, and
 * fix the bug using pass by reference!
 */

#include "console.h"
#include "simpio.h"
#include "testing/SimpleTest.h"
#include "vector.h"
using namespace std;

void doubleVec(Vector<int>& vec) {  // YAY!
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = vec[i] * 2;
    }
}

int main()
{
    if (runSimpleTests(SELECTED_TESTS)) {
        return 0;
    }
    return 0;
}

// BEGIN TESTS

PROVIDED_TEST("Test doubleVec function") {
    Vector<int> orig = {1, 2, 3};
    Vector<int> doubled = {2, 4, 6};

    doubleVec(orig);
    EXPECT_EQUAL(orig, doubled);
}
