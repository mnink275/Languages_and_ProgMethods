#ifndef STACK_H
#define STACK_H

#include <deque>
template<typename T>
class Stack {   // Our Stack template does not define it’s own constructors - the
                // default constructor provided by the compiler will invoke the
                // deque’s default constructor.
public:
    const T& top() {
        return stack.front();
    }

    void push(const T& pushValue) {
        stack.push_front(pushValue);
    }

    void pop() {
        stack.pop_front();
    }

    bool isEmpty() const {
        return stack.empty();
    }

    size_t size() const {
        return stack.size();
    }

private:
    std::deque<T> stack;
};

#endif
