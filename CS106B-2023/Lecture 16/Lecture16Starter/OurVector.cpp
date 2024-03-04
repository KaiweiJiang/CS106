// OurVector.cpp
// Implementation of OurVector class

#include "error.h"
#include "strlib.h"
#include "OurVector.h"
#include "testing/SimpleTest.h"

const int INITIAL_CAPACITY = 8;

// constructor
OurVector::OurVector(){
    /*TODO: Fill this in!*/
}

// append value to the end of our array
void OurVector::add(int value){
   /*TODO: Fill this in!*/
}

// insert value at index
void OurVector::insert(int index, int value){
   /*TODO: Fill this in!*/
}
// remove value from index
void OurVector::remove(int index){
   /*TODO: Fill this in!*/
}

// return the element at index
int OurVector::get(int index){
   /*TODO: Fill this in!*/
   return 0;
}

// returns the number of elements
int OurVector::size(){
   /*TODO: Fill this in!*/
   return 0;
}

// returns true if there aren't any elements
bool OurVector::isEmpty(){
   /*TODO: Fill this in!*/
   return false;
}



//PROVIDED_TEST("Construct vector and see constructor/destructor be called."){
//    OurVector vec;
//}

//PROVIDED_TEST("Check that newly created vector is empty"){
//    OurVector vec;
//    EXPECT_EQUAL(vec.isEmpty(), true);
//}

//PROVIDED_TEST("Add 5 elements to vector."){
//    OurVector vec;
//    for (int i = 0; i < 5; i++){
//        vec.add(i);
//    }

//    EXPECT_EQUAL(vec.size(), 5);
//    EXPECT_EQUAL(vec.isEmpty(), false);
//    cout << endl;
//    vec.printDebugInfo();
//}

//PROVIDED_TEST("Add 5 elements and then insert another element at index 3."){
//    OurVector vec;
//    for (int i = 0; i < 5; i++){
//        vec.add(i);
//    }

//    vec.insert(3, 100);
//    EXPECT_EQUAL(vec.size(), 6);
//    EXPECT_EQUAL(vec.get(3), 100);

//    cout << endl;
//    vec.printDebugInfo();
//}

//PROVIDED_TEST("Add 5 elements and then remove element at index 3."){
//    OurVector vec;
//    for (int i = 0; i < 5; i++){
//        vec.add(i);
//    }

//    vec.remove(3);
//    EXPECT_EQUAL(vec.size(), 4);
//    EXPECT_EQUAL(vec.get(3), 4);

//    cout << endl;
//    vec.printDebugInfo();
//}

//PROVIDED_TEST("Add 5 elements and then do an insertion at the very beginning and very end of vector."){
//    OurVector vec;
//    for (int i = 0; i < 5; i++){
//        vec.add(i);
//    }

//    vec.insert(0, 200);
//    EXPECT_EQUAL(vec.size(), 6);
//    EXPECT_EQUAL(vec.get(0), 200);
//    for (int i = 0; i < 5; i++){
//        EXPECT_EQUAL(vec.get(i+1), i);
//    }
//    cout << endl;
//    vec.printDebugInfo();

//    vec.insert(6, 300);
//    EXPECT_EQUAL(vec.size(), 7);
//    EXPECT_EQUAL(vec.get(0), 200);
//    for (int i = 0; i < 5; i++){
//        EXPECT_EQUAL(vec.get(i+1), i);
//    }
//    EXPECT_EQUAL(vec.get(6), 300);
//    vec.printDebugInfo();
//}

//PROVIDED_TEST("Add 50 elements. Tests expansion (twice)"){
//    OurVector vec;
//    for (int i = 0; i < 50; i++){
//        vec.add(i);
//    }

//    EXPECT_EQUAL(vec.size(), 50);
//    for (int i = 0; i < 50; i++){
//        EXPECT_EQUAL(vec.get(i), i);
//    }
//    EXPECT_EQUAL(vec.isEmpty(), false);
//    cout << endl;
//    vec.printDebugInfo();
//}
