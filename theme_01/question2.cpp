#include <iostream>
#include <cstring>
//                              Как с этим работать?
struct sreg {
    unsigned enable : 1;
    unsigned page : 3;
    unsigned : 1; // не используется
    unsigned mode : 2;
    unsigned : 4; // не используется
    unsigned access : 1;
    unsigned length : 1;
    unsigned non_resident : 1;
};

// char f(const char* q) {
    
//     return q[0];
// }


int main()
{  
   // sreg* p = (sreg*)0777572;
    //std::cout << << std::endl;
    return 0;
}

