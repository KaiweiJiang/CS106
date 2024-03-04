/*
 * File: main.cpp
 * --------------
 * Simulates a rocket taking off by counting
 * down from 10 to 1, then printing "Liftoff!"
 */

#include "console.h"
#include "simpio.h"
using namespace std;


int main()
{
    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }
    cout << "Liftoff!" << endl;

    return 0;
}
