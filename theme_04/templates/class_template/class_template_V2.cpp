#include <iostream>
#include "Stack.h"   // Двухстороння очередь.
using namespace std;

// function template to manipulate Stack<T>
template<typename T>
void testStack(
    Stack<T>& theStack, // reference to Stack<T>
    const T& value, // initial value to push
    const T& increment, // increment for subsequent values
    size_t size, // number of items to push
    const string& stackName) { // name of the Stack<T> object
    cout << "\nPushing elements onto " << stackName << '\n';
    T pushValue{value};

    for(size_t i{0}; i < size; ++i) {
        theStack.push(pushValue);
        cout << pushValue << ' ';
        pushValue += increment;
    }

    cout << "\n\nPopping elements from " << stackName << '\n';

    while (!theStack.isEmpty()) { 
        cout << theStack.top() << ' ';
        theStack.pop();
    }

    cout << "\nStack is empty. Cannot pop." << endl;
}



int main() {
    Stack<double> doubleStack;
    const size_t doubleStackSize{5};
    testStack(doubleStack, 1.1, 1.1, doubleStackSize, "doubleStack");

    Stack<int> intStack;
    const size_t intStackSize{10};
    testStack(intStack, 1, 1, intStackSize, "intStack");

    return 0;
}

