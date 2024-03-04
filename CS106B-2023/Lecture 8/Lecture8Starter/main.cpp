#include <iostream>
#include "console.h"
#include "strlib.h"
#include "testing/SimpleTest.h"
using namespace std;

int factorial(int n);
int factorialIterative(int n);
string reverseString(string s);

int main() {

    if (runSimpleTests(SELECTED_TESTS)) {
        return 0;
    }

    /* Put function calls here. */

    return 0;
}

/* This is a recursive implementation of a function to calculate
 * factorials. This function works correctly for positive values
 * of n whose computed factorial value does not overflow the int
 * data type (n <= 12).
 */
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

/* This is an iterative implementation of a function to calculate
 * factorials. This function works correctly for positive values
 * of n whose computed factorial value does not overflow the int
 * data type (n <= 12).
 *
 * This function is provided for comparison to the recursive
 * implementation. What similarities and differences do you notice?
 * Would you consider one implementation better or easier to
 * understand than the other? Why so?
 */
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

/* This function recursively reverses the characters of the provided
 * string and returns the reversed string.
 */
string reverseString(string s) {
    /* TODO: Fill in the remainder of this function! */
    return "";
}

string reverseIterative(string s) {
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

//PROVIDED_TEST("Collection of tests to validate the behavior of the factorial function."){
//    EXPECT_EQUAL(factorial(0), factorialIterative(0));
//    EXPECT_EQUAL(factorial(1), factorialIterative(1));
//    EXPECT_EQUAL(factorial(2), factorialIterative(2));
//    EXPECT_EQUAL(factorial(3), factorialIterative(3));
//    EXPECT_EQUAL(factorial(4), factorialIterative(4));
//    EXPECT_EQUAL(factorial(5), factorialIterative(5));
//    EXPECT_EQUAL(factorial(6), factorialIterative(6));
//    EXPECT_EQUAL(factorial(7), factorialIterative(7));
//    EXPECT_EQUAL(factorial(8), factorialIterative(8));
//}

PROVIDED_TEST("Collection of tests to validate the behavior of the reverseString function."){
    EXPECT_EQUAL(reverseString("hello"), "olleh");
    EXPECT_EQUAL(reverseString("world"), "dlrow");
    EXPECT_EQUAL(reverseString("Hello, World!"), "!dlroW ,olleH");
    EXPECT_EQUAL(reverseString(""), "");
}

//PROVIDED_TEST("Collection of tests to validate the behavior of the iterative reverse function."){
//    EXPECT_EQUAL(reverseIterative("hello"), "olleh");
//    EXPECT_EQUAL(reverseIterative("world"), "dlrow");
//    EXPECT_EQUAL(reverseIterative("Hello, World!"), "!dlroW ,olleH");
//    EXPECT_EQUAL(reverseIterative(""), "");
//}

