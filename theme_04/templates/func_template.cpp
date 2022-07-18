#include <iostream>
using namespace std;

template<typename T>    // Type autofill and creating template functions.
T maximum(T value1, T value2, T value3) {
    T maximumValue{value1};
    if(value2 > maximumValue) {
        maximumValue = value2;
    }
    if(value3 > maximumValue) {
        maximumValue = value3;
    }

    return maximumValue;
}

int main() {
    cout << "Input three integer values: ";
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;
    cout << "The maximum integer value is: "
         << maximum(int1, int2, int3);

    cout << "\n\nInput three double values: ";
    double double1, double2, double3;
    cin >> double1 >> double2 >> double3;
    cout << "The maximum double value is: "
         << maximum(double1, double2, double3);

    cout << "\n\nInput three characters: ";
    char char1, char2, char3;
    cin >> char1 >> char2 >> char3;
    cout << "The maximum character value is: "
         << maximum(char1, char2, char3);
        
    return 0;
}