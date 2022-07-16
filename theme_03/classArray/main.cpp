#include <iostream>
#include <stdexcept>
#include "Array.cpp"

using namespace std;
int main()
{
    Array vector1{7}; // seven-element Array
    Array vector2; // 10-element Array by default
    cout << "Size of Array vector1 is " << vector1.getSize()
         << "\nArray after initialization " << vector1;
    cout << "Size of Array vector2 is " << vector2.getSize()
         << "\nArray after initialization " << vector2;
    cout << "\nEnter 17 numbers: " << endl;
    cin >> vector1 >> vector2;

    cout << "\nAfter input, the Arrays contain:\n" << "vector1: " << vector1
         << "vector2: " << vector2;
  
    // overloaded (!=) operator:
    cout << "\nEvaluating: vector1 != vector2" << endl;
    if (vector1 != vector2) {
        cout << "vector1 and vector2 are not equal" << endl;
    }

    // create Array vector3 using vector1 as an initializer;
    // print size and contents
    Array vector3{vector1}; // invokes copy constructor
    cout << "Size of Array vector3 is " << vector3.getSize()
         << "\nArray after initialization " << vector3;
    // overloaded (=) operator:
    cout << "\nAssigning vector2 to vector1:" << endl;
    vector1 = vector2; // note target Array is smaller!
    cout << "vector1: " << vector1 << "vector2: " << vector2;

    // overloaded (==) operator:
    cout << "\nEvaluating: vector1 == vector2" << endl;
    if (vector1 == vector2) {
        cout << "vector1 and vector2 are equal" << endl;
    }

    //overloaded subscript operator to create rvalue:
    cout << "\nvector1[5] is " << vector1[5];

    //overloaded subscript operator to create lvalue:
    cout << "\n\nAssigning 1000 to vector1[5] " << endl;
    vector1[5] = 1000;
    cout << "vector1: " << vector1;

    //attemps to use out-of-range subscript:
    try {
        cout << "\nAttempt to assign 1000 to vector1[15]" << endl;
        vector1[15] = 1000; // ERROR
    }
    catch (out_of_range& ex) {
        cout << "An exception occurred: " << ex.what() << endl;
    }

    Array vector4{vector3};
    cout << endl << "vector3 and vector4 is: \n" << vector3;
    cout << "\nAddition (+) of vector3 to vector4:" << endl;
    cout <<vector3 + vector4;
    
    cout << "\nSubtraction (-) of vector4 from vector3:" << endl;
    cout << vector3 - vector4;

    cout << "\nMultiply (*) vector3 by 3:" << endl;
    cout << vector3 * 3;

    cout << "\nDividing (/) vector3 by 2:" << endl;
    cout << vector3 / 2;

    cout << "\nComparing the sum of the elements of arrays:" << endl;
    cout << "vector1 is: \n" << vector3;
    Array user_vector{5};
    cout << "\nEnter user_vector (5 elements) for comparing with vector1: \n";
    cin >> user_vector;
    if (vector3 > user_vector) {
        cout << "vector3 is larger than user_vector";
    }
    else if (vector3 < user_vector) {
        cout << "vector3 is smaller than user_vector";
    }
    else {
        cout << "vector3 is equal to user_vector";
    }
    return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17