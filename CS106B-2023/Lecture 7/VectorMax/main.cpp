/*
 * File: main.cpp
 * --------------
 * Compare how the runtimes of two different
 * implementations of vectorMax scale with
 * the size of the input Vector.
 */

#include "console.h"
#include "simpio.h"
#include "vector.h"
#include "testing/SimpleTest.h"
using namespace std;

int vectorMaxLinear(Vector<int> &v) {
    int currentMax = v[0];
    int n = v.size();
    for (int i = 1; i < n; i++) {
        if (currentMax < v[i]) {
            currentMax = v[i];
        }
    }
    return currentMax;
}

int vectorMaxQuadratic(Vector<int> &v) {
    int result = -1;
    for (int num: v) {
        bool seenLarger = false;
        for (int compareNum: v) {
            if (compareNum > num) {
                seenLarger = true;
            }
        }
        // rather than returning early, we'll return at the end
        // this demonstrates the worst case runtime and makes our
        // time results more consistent
        if (!seenLarger) {
            result = num;
        }
    }
    return result;
}


int main()
{
    if (runSimpleTests(SELECTED_TESTS)) {
        return 0;
    }
    return 0;
}

PROVIDED_TEST("Time Solution 1") {
    int smallest = 1000000, largest = 16000000;
    for (int size = smallest; size <= largest; size *= 2) {
        Vector<int> vec(size);
        for (size_t i = 0; i < vec.size(); i++) {
            vec[i] = random () % size;
        }
        TIME_OPERATION(size, vectorMaxLinear(vec));
    }
}

PROVIDED_TEST("Time Solution 2") {
    int smallest = 1000, largest = 16000;
    for (int size = smallest; size <= largest; size *= 2) {
        Vector<int> vec(size);
        for (size_t i = 0; i < vec.size(); i++) {
            vec[i] = random () % size;
        }
        TIME_OPERATION(size, vectorMaxQuadratic(vec));
    }
}
